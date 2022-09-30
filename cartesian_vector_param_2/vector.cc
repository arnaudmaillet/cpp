#include "vector.hh"

Vector::Vector(){
    _x = 0;
    _y = 0;
}

Vector::Vector(std::initializer_list<int> l){
    std::cout << "constructed with a " << l.size() << "-element list\n";
}

// Public Member functions here
// Vector::Vector& operator+=(const Vector& rhs) {
//     _x += rhs._x;
//     _y += rhs._y;
// }
// Vector& operator-=(const Vector& rhs) {
//     _x -= rhs._x;
//     _y -= rhs._y;
// }
// Vector& operator+(const Vector& rhs) {
//     _x + rhs._x;
//     _y + rhs._y;
// }
// Vector& operator-(const Vector& rhs) {
//     _x - rhs._x;
//     _y - rhs._y;
// }
// Vector& operator*(const int nb) {
//     _x * nb;
//     _y * nb;
// }
// Vector& operator*(const Vector& rhs) {
//     _x * rhs._x;
//     _y * rhs._y;
// }