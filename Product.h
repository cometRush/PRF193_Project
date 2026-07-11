#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>

class Product{
	private:
		std::string productTypes, productName;
		int quantities, id;
		double price;
	public:
		Product(std::string name, std::string t, int q, int id, double p): productName(name), productTypes(t), quantities(q), id(id), price(p){}
		
		// Getter & Setter for Order and ShopManager to update the item
		int quantitiesGet() const {return quantities;}
		int idGet() const {return id;}
		double priceGet() const {return price;}
		std::string typeGet() const {return productTypes;}
		std::string nameGet() const {return productName;}
		
		void quantitiesSet(int newQuantities) {
			if(newQuantities < 0)
			{
				std::cout << "Invalid quantity!\n";
				return;
			}
			quantities = newQuantities;
		}
		void priceSet(double newPrice) {price = newPrice;}
		// No need setter for product name, type, or id
		
		
		void displayProduct() const {
			std::cout << "Item: " << productName << " " << id << ": $" << price << " ( " << quantities << " in stock. )" << std::endl;
		}
		
};

#endif
