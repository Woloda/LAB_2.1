#include <sstream>
#include "Product.h"

Product::Product() {   //конструктор за умовчанням(без параметрів)
	first = 0;
	second = 0;
}

Product::Product(uns_i value_f = 0, double value_s = 0) {   //конструктор ініціалізації
	first = value_f;
	second = value_s;
}

Product::Product(const Product& obj) {   //конструктор копіювання
	first = obj.first;
	second = obj.second;
}

void Product::set_f(uns_i value)   //встановлення значення поля "first"
{ first = value; }

void Product::set_s(double value)  //встановлення значення поля "second"
{ second = value; }  

uns_i Product::get_f() const       //отримання значення поля "first"
{ return first; }

double Product::get_s() const      //отримання значення поля "second"
{ return second; }

Product& Product::operator = (const Product& obj) {   //перевантаження операції "присвоєння"
	first = obj.first;
	second = obj.second;

	return *this;
}

Product::operator std::string() const {    //приведення типу – перетворення у літерний рядок
	std::stringstream sout;
	sout << "\n\nPeretvorenya v liternuy radok";
	sout << "\nfirst: " << first;
	sout << "\nsecond: " << second;

	return sout.str();
}

//перевантаження операції "виводу"(виводу на екран)
std::ostream& operator << (std::ostream& out , const Product& obj) {
	out << "\n\nPokaz vvedenux vamu znachenuy";
	out << "\nfirst: " << obj.first;
	out << "\nsecond: " <<  obj.second;

	return out;
}

//перевантаження операції "вводу"(введення з клавіатури)
std::istream& operator >> (std::istream& in, Product& obj) {
	bool perevirka{};
	int  value_fir{};
	double value_sec{};

		do {
			std::cout << "\nVveid znachenua argymentiv: ";

			std::cout << "\n\nVvedit first: "; in >> value_fir;
			std::cout << "Vvedit second: ";    in >> value_sec;

			if (value_fir >= 0 && value_sec >= 0)   //перевірка введених користувачем значень
				perevirka = true;
			else {
				std::cout << "\n\nNekorektno vvedeni znachenua argymentiv!!!";
				perevirka = false;
			}
		} while (!perevirka);

	obj.first  = value_fir;
	obj.second = value_sec;

	return in;
}

Product& Product::operator ++() {     //перевантаження операції "інкременту"(префіксна форма)
	++first;
	return *this;
}

Product& Product::operator --() {     //перевантаження операції "дикременту"(префіксна форма)
	--first;
	return *this;
}

Product Product::operator ++(int) {   //перевантаження операції "інкременту"(постфіксна форма)
	Product a(*this);
	second++;
	return a;
}

Product Product::operator --(int) {   //перевантаження операції "дикременту"(постфіксна форма)
	Product a(*this);
	second--;
	return a;
}

double Product::power() const  //обчислення загальна калорійність продукту
{ return first * 10.0 * second; }