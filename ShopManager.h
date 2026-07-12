#ifndef SHOPMANAGER_H
#define SHOPMANAGER_H
#include "Product.h"
#include "Invoice.h"
#include <vector>
#include <iostream>
#include <string>


class ShopManager{
	private:
		int uniqueId;
		std::vector<Product> inventory;
	public:
		ShopManager() {} //DEFAULT CONSTRUCTION, DO NOT DELETE
		ShopManager(std::vector<Product> inv): inventory(inv){uniqueId = 1;}
		
		// ai do fix phan nay di
		void addProductViaAdmin(std::string name,std::string type,double price, int quantities) {
			std::cout << "\n--- ADD NEW PRODUCT ---\n";
			std::cin.ignore();
		
			std::cout << "Enter Product Name: ";
			getline(std::cin, name);
			
			std::cout << "Enter Product Category: ";
			getline(std::cin, type);
		
			std::cout << "Enter Price ($): ";
			std::cin >> price;
		
			std::cout << "Enter Initial Stock Quantity: ";
			std::cin >> quantities;
		}
		int nextId() {uniqueId++;}
};

#endif
