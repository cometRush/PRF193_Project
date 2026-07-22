#include "ShopManager.h"
#include "Product.h"
#include "Invoice.h"
#include "Customer.h"
#include "CustomerManager.h"
#include <string>
#include <fstream>
using namespace std;

int id;
string name, type;
double price;
int quantities;

int main() {
	cout << "--- \e[1;91m ADMIN PANEL \e[0m ---\n" << endl;
    int choice;
    ShopManager shop;
    
	cout << "1. Add Product to Spreadsheet\n";
	cout << "2. Exit\n";
	cin >> choice;
	
	switch (choice) {
		case 1:{
			
			//need fixing
			shop.addProductViaAdmin(name, type,price,quantities);
			id = shop.nextId();
			ofstream file("inventory.csv", ios::app);
			
			if (file.is_open()) {
				file << id << "," << name << "," << price << "," << quantities << "\n";
				file.close(); 
				cout << "\n[Success] Product successfully saved to inventory.csv!\n";
			} 
			else {
				cerr << "\n[Error] Could not open the spreadsheet file.\n";
			}
			break;
		}
			
		default:
			cout << "[Error] Incorrect syntax.\n";
	}
    
	return 0;
}
