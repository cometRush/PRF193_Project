#ifndef CUSTOMERMANAGER_H
#define CUSTOMERMANAGER_H

#include "Customer.h"
#include <vector>
#include <iostream>
#include <string>

class CustomerManager
{
    private:

        std::vector<Customer> customerList;

    public:

        CustomerManager(){}

        CustomerManager(std::vector<Customer> list)
        {
            customerList = list;
        }

        // Add Customer

        void addCustomer(int id,
                         std::string name,
                         std::string phone,
                         std::string address,
                         int points)
        {
            Customer customer(id, name, phone, address, points);

            customerList.push_back(customer);

            std::cout << "Customer added successfully!\n";
        }

        // Display

        void displayAllCustomers() const
        {
            if(customerList.empty())
            {
                std::cout << "No customer found.\n";
                return;
            }

            for(int i = 0; i < customerList.size(); i++)
            {
                customerList[i].displayCustomer();
                std::cout << std::endl;
            }
        }

        // Search

        void searchCustomer(int id) const
        {
            for(int i = 0; i < customerList.size(); i++)
            {
                if(customerList[i].customerIDGet() == id)
                {
                    customerList[i].displayCustomer();
                    return;
                }
            }

            std::cout << "Customer not found.\n";
        }

        // Delete

        void deleteCustomer(int id)
        {
            for(int i = 0; i < customerList.size(); i++)
            {
                if(customerList[i].customerIDGet() == id)
                {
                    customerList.erase(customerList.begin() + i);

                    std::cout << "Customer deleted.\n";

                    return;
                }
            }

            std::cout << "Customer not found.\n";
        }

        // Edit

        void editCustomer(int id,
                          std::string phone,
                          std::string address)
        {
            for(int i = 0; i < customerList.size(); i++)
            {
                if(customerList[i].customerIDGet() == id)
                {
                    customerList[i].phoneNumberSet(phone);
                    customerList[i].addressSet(address);

                    std::cout << "Customer updated.\n";

                    return;
                }
            }

            std::cout << "Customer not found.\n";
        }

};

#endif
