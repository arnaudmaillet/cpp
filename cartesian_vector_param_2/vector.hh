#pragma once

#include <ostream>
#include <iostream>
#include <initializer_list>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(std::initializer_list<int> l);
    // possibly more

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);
    Vector& operator+(const Vector& rhs);
    Vector& operator-(const Vector& rhs);
    Vector& operator*(const int nb);
    Vector& operator*(const Vector& rhs);
    // std::ostream& operator<<(std::ostream& output, std::vector<T> const& values);
    // More to go

private:
// Private Member functions here

// Member variables are ALWAYS private, and they go here
    int _x;
    int _y;
};

// Nonmember function operators go here