
/**
 * @file mycomplex.cpp
 * @brief Реализация класса Complex.
 */

#include <iostream>
#include <cmath>
#include "mycomplex.h"

/**
 * @brief Конструктор класса Complex.
 * @param aRe Действительная часть комплексного числа.
 * @param aIm Мнимая часть комплексного числа.
 */
Complex::Complex(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief Конструктор копирования класса Complex.
 * @param aRval Другое комплексное число для копирования.
 */
Complex::Complex(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
}

/**
 * @brief Деструктор класса Complex.
 * Устанавливает действительную и мнимую части в ноль.
 */
Complex::~Complex() {
    Re = 0.0;
    Im = 0.0;
}

/**
 * @brief Устанавливает значения действительной и мнимой частей комплексного числа.
 * @param aRe Действительная часть комплексного числа.
 * @param aIm Мнимая часть комплексного числа.
 */
void Complex::Set(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief Оператор приведения к типу double для класса Complex.
 * @return Модуль (абсолютное значение) комплексного числа.
 */
Complex::operator double() {
    return abs();
}

/**
 * @brief Рассчитывает абсолютное значение (модуль) комплексного числа.
 * @return Модуль комплексного числа.
 */
double Complex::abs() {
    return sqrt(Re * Re + Im * Im);
}

// ... Другие методы и операторы ...

/**
 * @brief Оператор ввода комплексного числа из потока.
 * @param stream Входной поток.
 * @param a Объект Complex для ввода.
 * @return Входной поток после операции ввода.
 */
istream& operator>>(istream& stream, Complex& a) {
    char tmp[256];
    stream >> a.Re >> a.Im >> tmp;
    return stream;
}

/**
 * @brief Оператор вывода комплексного числа в поток.
 * @param stream Выходной поток.
 * @param a Объект Complex для вывода.
 * @return Выходной поток после операции вывода.
 */
ostream& operator<<(ostream& stream, Complex& a) {
    stream << a.Re;
    if (!(a.Im < 0)) {
        stream << '+';
    }
    stream << a.Im << 'i';
    return stream;
}