#ifndef ORDER_H
#define ORDER_H
#include <vector>
#include <utility>
#include "Product.h"

class Order {
	private:
		int id;
		std::vector<std::pair<Product, int>> cart;
		double total;
	public:
		Order(int id, std::vector<std::pair<Product, int>> c, double t): id(id), cart(c), total(t){}
        int getId() const{
			return id;
		}
        int getTotal() const{
			return total; 
		}
};
#endif
