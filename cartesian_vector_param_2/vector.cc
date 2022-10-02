#include "vector.hh"

// Public Member functions here
Vector::Vector(){
    for (int i = 0; i < NDIM; i++) vector[i] = 0;    
}

Vector::Vector(std::initializer_list<int> args){
    int i = 0;
    std::initializer_list<int>::iterator it;
    for (it = args.begin(); it != args.end(); ++it) vector[i++] = *it;
}

std::ostream& operator<<(std::ostream& out, const Vector& rhs) {
    int i = 0;
    out << "{";
    int* data = Vector{rhs}.getValues();
    for (i = 0; i < NDIM - 1; i++) out << data[i] << ",";
    out << data[i] << "}";
    return out;
}

int *Vector::getValues(){
        return vector;
}

Vector& Vector::operator+=(const Vector& rhs){
    for (int i = 0; i < NDIM; ++i) vector[i] += rhs.vector[i];
    return *this;
}

Vector& Vector::operator+=(int val){
    for (int i = 0; i < NDIM; i++) vector[i] += val;
    return *this;
}

Vector& Vector::operator-=(const Vector& rhs){
    for (int i = 0; i < NDIM; ++i) vector[i] -= rhs.vector[i];
    return *this;
}

Vector& Vector::operator*=(const Vector& rhs){
    for (int i = 0; i < NDIM; i++) vector[i] *= rhs.vector[i];
    return *this;
}

Vector& Vector::operator*=(const int& val){
    for (int i = 0; i < NDIM; i++) vector[i] *= val;
    return *this;
}

Vector& Vector::operator+(const Vector& rhs){
    return Vector{rhs} += *this;
}

Vector& Vector::operator-(const Vector& rhs){
    return Vector{rhs} -= *this;
}

Vector operator*(const Vector& rhs, int val){
    auto v = Vector{rhs};
    int* data = Vector{rhs}.getValues();
    for (int i = 0; i <= NDIM; i++) v[i] += (val - 1) * data[i];
    return v;
}

int& Vector::operator*(const Vector& rhs){
    auto vec = (Vector{rhs} *= *this);
    for (int i = 1; i < NDIM; i++) *vec.getValues() += vec[i];
    return *vec.getValues();
}

int& Vector::operator[](int rhs){
    return vector[rhs];
}