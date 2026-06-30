#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

class Product {
	private:
		std::string productTypes, productName;
		int quantities, id;
		double price;
	public:
		Product(std::string name, std::string t, int q, int id, double p): productName(name), productTypes(t), quantities(q), id(id), price(p){}
};
#endif