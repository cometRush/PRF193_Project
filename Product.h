#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>

class Product{
	private:
		std::string category, productName;
		int quantity, productID;
		double price;
	public:
		Product(std::string name, std::string c, int q, int id, double p): productName(name), category(c), quantity(q), productID(id), price(p){}
		
		// Getter & Setter for Order and ShopManager to update the item
		int quantityGet() const {return quantity;}
		int productIDGet() const {return productID;}
		double priceGet() const {return price;}
		std::string categoryGet() const {return category;}
		std::string nameGet() const {return productName;}
		
		void quantitySet(int newQuantity) {
			if(newQuantities < 0)
			{
				std::cout << "Invalid quantity!\n";
				return;
			}
			quantities = newQuantities;
		}
		void priceSet(double newPrice){
			if(newPrice < 0)
			{
				std::cout << "Invalid quantity!\n";
				return;
			}
			price = newPrice;
		}
		// No need setter for product name, type, or id
		
		void displayProduct() const {
			std::cout << "Item: " << productName << " " << id << ": $" << price << " ( " << quantities << " in stock. )" << std::endl;
		}
		
};

#endif
