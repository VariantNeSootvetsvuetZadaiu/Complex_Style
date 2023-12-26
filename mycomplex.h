```cpp
/**
 * @file mycomplex.h
 * @brief Заголовочный файл с объявлением класса Complex.
 */

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>

/**
 * @brief Класс Complex представляет комплексное число.
 */
class Complex {
    double Re; /**< Действительная часть комплексного числа. */
    double Im; /**< Мнимая часть комплексного числа. */

public:
    /**
     * @brief Конструктор класса Complex.
     * @param aRe Действительная часть комплексного числа.
     * @param aIm Мнимая часть комплексного числа.
     */
    Complex(double aRe = 0, double aIm = 0);

    /**
     * @brief Конструктор копирования класса Complex.
     * @param aRval Другое комплексное число для копирования.
     */
    Complex(const Complex&);

    /**
     * @brief Деструктор класса Complex.
     */
    ~Complex();

    /**
     * @brief Устанавливает значения действительной и мнимой частей комплексного числа.
     * @param aRe Действительная часть комплексного числа.
     * @param aIm Мнимая часть комплексного числа.
     */
    void Set(double aRe, double aIm = 0);

    /**
     * @brief Оператор приведения к типу double для класса Complex.
     * @return Модуль (абсолютное значение) комплексного числа.
     */
    operator double();

    /**
     * @brief Рассчитывает абсолютное значение (модуль) комплексного числа.
     * @return Модуль комплексного числа.
     */
    double abs();

    /**
     * @brief Оператор ввода комплексного числа из потока.
     * @param stream Входной поток.
     * @param a Объект Complex для ввода.
     * @return Входной поток после операции ввода.
     */
    friend istream& operator>>(istream&, Complex&);

    /**
     * @brief Оператор вывода комплексного числа в поток.
     * @param stream Выходной поток.
     * @param a Объект Complex для вывода.
     * @return Выходной поток после операции вывода.
     */
    friend ostream& operator<<(ostream&, const Complex&);

    /**
     * @brief Оператор сложения комплексных чисел.
     * @param aRval Другое комплексное число.
     * @return Результат сложения комплексных чисел.
     */
    Complex operator+(const Complex&);

    /**
     * @brief Оператор вычитания комплексных чисел.
     * @param aRval Другое комплексное число.
     * @return Результат вычитания комплексных чисел.
     */
    Complex operator-(const Complex&);

    /**
     * @brief Оператор сложения комплексного числа и вещественного числа.
     * @param aval Вещественное число.
     * @return Результат сложения комплексного и вещественного чисел.
     */
    Complex operator+(const double&);

    /**
     * @brief Оператор сложения вещественного числа и комплексного числа.
     * @param aval Вещественное число.
     * @param aRval Комплексное число.
     * @return Результат сложения вещественного и комплексного чисел.
     */
    friend Complex operator+(const double&, const Complex&);

    /**
     * @brief Оператор вычитания вещественного числа из комплексного числа.
     * @param aRval Вещественное число.
     * @return Результат вычитания вещественного числа из комплексного числа.
     */
    Complex operator-(const double&);

    /**
     * @brief Оператор вычитания комплексного числа из вещественного числа.
     * @param aval Вещественное число.
     * @param aRval Комплексное число.
     * @return Результат вычитания комплексного числа из вещественного числа.
     */
    friend Complex operator-(const double&, const Complex&);

    /**
     * @brief Оператор умножения комплексных чисел.
     * @param aRval Другое комплексное число.
     * @return Результат умножения комплексных чисел.
     */
    Complex operator*(const Complex&);

    /**
     * @brief Оператор умножения комплексного числа на вещественное число.
     * @param aRval Вещественное число.
     * @return Результат умножения комплексного числа на вещественное число.
     */
    Complex operator*(const double&);

    /**
     * @brief Оператор умножения вещественного числа на комплексное число.
     * @param aval Вещественное число.
     * @param aRval Комплексное число.
     * @return Результат умножения вещественного числа на комплексное число.
     */
    friend Complex operator*(const double&, const Complex&);

    /**
     * @brief Оператор деления комплексного числа на вещественное число.
     * @param aRval Вещественное число.
     * @return Результат деления комплексного числа на вещественное число.
     */
    Complex operator/(const double&);

    /**
     * @brief Оператор сложения с присваиванием комплексного числа.
    