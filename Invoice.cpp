// LindseyHelp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;

class Invoice
{
public:
	Invoice(string partNum, string partDesc, int quantity, int price)
	{
		partNumber = partNum;
		partDescription = partDesc;
		quantityPurchased = quantity;
		itemPrice = price;
	}

	// --------------
	// Setters:
	// --------------

	void setPartNum(string partNum)
	{
		partNumber = partNum;
	}

	void setPartDesc(string partDesc)
	{
		partDescription = partDesc;
	}

	void setQuantityPurchased(int quant)
	{
		quantityPurchased = quant;
	}

	void setItemPrice(int price)
	{
		itemPrice = price;
	}

	// --------------
	// Getters:
	// --------------

	string getPartNum()
	{
		return partNumber;
	}

	string getPartDesc()
	{
		return partDescription;
	}

	int getQuantityPurchased()
	{
		return quantityPurchased;
	}

	int getItemPrice()
	{
		return itemPrice;
	}

	// ---------------------------
	// Other member functions:
	// ---------------------------

	int getInvoiceAmount()
	{
		// If either quantity or price is negative, immediately return 0
		if (quantityPurchased < 0 || itemPrice < 0)
		{
			return 0;
		}

		return quantityPurchased * itemPrice;
	}


private:
	string partNumber;
	string partDescription;
	int quantityPurchased;
	int itemPrice;
};

int main()
{
	Invoice invoice = Invoice("12Q3P4", "Standard Part", 7, 13);

	// Part number
	std::cout << "Part number is: " << invoice.getPartNum() << std::endl;
	std::cout << "Changing part num to 99RT7B" << std::endl;
	invoice.setPartNum("99RT7B");
	std::cout << "Part number is now: " << invoice.getPartNum() << std::endl << std::endl;

	// Part description
	std::cout << "Part description is: " << invoice.getPartDesc() << std::endl;
	std::cout << "Changing part desc to \"A different part\"" << std::endl;
	invoice.setPartDesc("A different part");
	std::cout << "Part desc is now: " << invoice.getPartDesc() << std::endl << std::endl;

	// Quantity
	std::cout << "Quantity is: " << invoice.getQuantityPurchased() << std::endl;
	std::cout << "Changing quantity to 100" << std::endl;
	invoice.setQuantityPurchased(100);
	std::cout << "Quantity is now: " << invoice.getQuantityPurchased() << std::endl << std::endl;

	// Price
	std::cout << "Price per unit is: " << invoice.getItemPrice() << std::endl;
	std::cout << "Changing price to 2" << std::endl;
	invoice.setItemPrice(2);
	std::cout << "Price is now: " << invoice.getItemPrice() << std::endl << std::endl;

	// Invoice amount
	std::cout << "The total amount of the invoice for " << invoice.getQuantityPurchased() << " items at $"
		<< invoice.getItemPrice() << " Per unit is: $" << invoice.getInvoiceAmount();

    return 0;
}



// You can use the same name for variables as parameters and class members, you just
// refer to the class variable as 'this' like so:
//
// Invoice(int price)
// {
//		this->price = price;
// }
//
// private:
//		int price;
// 

// "this" is referring to the object you are in, so the Invoice class in this example.
// It basically says "The price variable of the Invoice object"

