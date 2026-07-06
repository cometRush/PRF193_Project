#ifndef SHOPMANAGER_H
#define SHOPMANAGER_H
#include "Product.h"
#include <vector>
#include <string>

class ShopManager{
	private:
		std::vector inventory;
	public:
		ShopManager(std::vector inv): inventory(inv){}
};
#endif
