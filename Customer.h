#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>

class Customer
{
    private:
        int customerID;
        std::string customerName;
        std::string phoneNumber;
        std::string address;
        int rewardPoints;

    public:

        Customer(int id,
                 std::string name,
                 std::string phone,
                 std::string addr,
                 int points)
        : customerID(id),
          customerName(name),
          phoneNumber(phone),
          address(addr),
          rewardPoints(points)
        {
        }

        // Getter

        int customerIDGet() const
        {
            return customerID;
        }

        std::string customerNameGet() const
        {
            return customerName;
        }

        std::string phoneNumberGet() const
        {
            return phoneNumber;
        }

        std::string addressGet() const
        {
            return address;
        }

        int rewardPointsGet() const
        {
            return rewardPoints;
        }

        // Setter

        void phoneNumberSet(std::string newPhone)
        {
            phoneNumber = newPhone;
        }

        void addressSet(std::string newAddress)
        {
            address = newAddress;
        }

        void rewardPointsSet(int newPoints)
        {
            if(newPoints < 0)
            {
                std::cout << "Invalid reward points!\n";
                return;
            }

            rewardPoints = newPoints;
        }

        // Display

        void displayCustomer() const
        {
            std::cout
            << "Customer ID: " << customerID
            << "\nName: " << customerName
            << "\nPhone: " << phoneNumber
            << "\nAddress: " << address
            << "\nReward Points: " << rewardPoints
            << std::endl;
        }

};

#endif
