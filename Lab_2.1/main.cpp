#include <iostream>
#include "Product.h"
#include "Make_Product_Class.h"

int main(void) {
	std::cout << "\n\n////////////////////////////////////////////////////////////////////1 obj\n";
	Product a(200, 12.4);
	std::cout << a;

	++a;
	std::cout << a;
	--a;
	std::cout << a;
	a++;
	std::cout << a;
	a--;
	std::cout << a;

	std::cout << a.operator std::string();
	std::cout << "\n\nZahalnya kaloriynist: " << a.power();

	std::cout << "\n\n////////////////////////////////////////////////////////////////////2 obj\n";

	Product b;
	std::cin >> b;
	std::cout << b;

	++b;
	std::cout << b;
	--b;
	std::cout << b;
	b++;
	std::cout << b;
	b--;
	std::cout << b;

	std::cout << b.operator std::string();
	std::cout << "\n\nZahalnya kaloriynist: " << b.power();

	std::cout << "\n\n////////////////////////////////////////////////////////////////////3 obj\n";

	Product c;
	int first{};
	double second{};

	std::cout << "\n\nVvedit first: "; std::cin >> first;
	std::cout << "Vvedit second: "; std::cin >> second;
	c = MakeProduct(first, second);
	std::cout << c;

	++c;
	std::cout << c;
	--c;
	std::cout << c;
	c++;
	std::cout << c;
	c--;
	std::cout << c;

	std::cout << c.operator std::string();
	std::cout << "\n\nZahalnya kaloriynist: " << c.power();
	return 0;
}