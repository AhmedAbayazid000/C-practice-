#include "main.hpp"
#include <iostream>

Rational::Rational(int num, int den) : num_(num) { // initializes num_ field with num value
    if (den) {
        den_ = den;
    } else {
        den_ = 1;
    }
}

void Rational::set(int num, int den) {
    num_ = num;
    if (den) {
        den_ = den;
    }
}

int Rational::num() const {
    return num_;
}

int Rational::den() const {
    return den_;
}

void Rational::set_num(int num) {
    num_ = num;
}

void Rational::set_den(int den) {
    if (den) {
        den_ = den;
    }
}

Rational Rational::operator+(const Rational &rhs) const {
    return Rational(num_ * rhs.den_ + rhs.num_ * den_,
                    den_ * rhs.den_);
}

Rational Rational::operator-(const Rational &rhs) const {
    return Rational(num_ * rhs.den_ - rhs.num_ * den_,
                    den_ * rhs.den_);
}
Rational Rational::operator*(const Rational &rhs) const {
    return Rational(num_*rhs.num_, den_*rhs.den_);   
}

void Rational::print() const {
    if (den_ == 1) {
        std::cout << num_;
    } else {
        std::cout << num_ << "/" << den_;
    }
}
