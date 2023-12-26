#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;

Complex::Complex(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

Complex::Complex(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
}

Complex::~Complex() {
    Re = 0.0;
    Im = 0.0;
}

void Complex::Set(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

Complex::operator double() {
    return abs();
}

double Complex::abs() {
    return sqrt(Re * Re + Im * Im);
}

Complex Complex::operator+(const Complex& aRval) {
    Complex Result;
    Result.Re = Re + aRval.Re;
    Result.Im = Im + aRval.Im;
    return Result;
}

Complex Complex::operator-(const Complex& aRval) {
    Complex Result;
    Result.Re = Re - aRval.Re;
    Result.Im = Im - aRval.Im;
    return Result;
}

Complex Complex::operator+(const double& aval) {
    Complex result;
    result.Re = Re + aval;
    result.Im = Im;
    return result;
}

Complex Complex::operator-(const double& aRval) {
    Complex Result(*this);
    Result.Re = Re - aRval;
    return Result;
}
