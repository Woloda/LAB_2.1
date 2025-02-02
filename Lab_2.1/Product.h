﻿#pragma once
#include <iostream>
#include <string>

typedef unsigned int uns_i;

class Product {
	uns_i first;
	double second;
public:
	Product();                 //конструктор за умовчанням(без параметрів)
	Product(uns_i, double);    //конструктор ініціалізації
	Product(const Product&);   //конструктор копіювання

	void set_f(uns_i value);   //встановлення значення поля "first"
	void set_s(double value);  //встановлення значення поля "second"

	uns_i get_f() const;       //отримання значення поля "first"
	double get_s() const;      //отримання значення поля "second"

	Product& operator = (const Product&);  //перевантаження операції "присвоєння"
	operator std::string() const;          //приведення типу – перетворення у літерний рядок

	friend std::ostream& operator << (std::ostream&, const Product&);   //перевантаження операції "виводу"(виводу на екран)
	friend std::istream& operator >> (std::istream&, Product&);         //перевантаження операції "вводу"(введення з клавіатури)

	Product& operator ++();     //перевантаження операції "інкременту"(префіксна форма) --- first
	Product& operator --();     //перевантаження операції "дикременту"(префіксна форма) --- first

	Product operator ++(int);   //перевантаження операції "інкременту"(постфіксна форма) --- second
	Product operator --(int);   //перевантаження операції "дикременту"(постфіксна форма) --- second

	double power() const;       //обчислення загальна калорійність продукту
};