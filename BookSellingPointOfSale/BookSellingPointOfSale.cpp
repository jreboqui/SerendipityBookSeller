// BookSellingPointOfSale.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "common.h"
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"

#include <iostream>
#include <sstream>

void cashier();
void invMenu();
void reports();
bool IntTryParseChoice(std::string input, int& output);

void displayMenu() {
	std::cout << "Serendipity Booksellers\n";

	std::cout << "\tMain Menu\n\n";

	std::cout << "1. Cashier Module\n";
	std::cout << "2. Inventory Database Module\n";
	std::cout << "3. Report Module\n";
	std::cout << "4. Exit\n\n";
}

const int SIZE = 20;

std::string bookTitle[SIZE];
std::string isbn[SIZE];
std::string author[SIZE];
std::string publisher[SIZE];
std::string dateAdded[SIZE];
int qtyOnHand[SIZE];
double wholesale[SIZE];
double retail[SIZE];

int main()
{
	

	std::string choice = "";
	int choice_integer = 0;

	bool valid = false;

	do {
		
		displayMenu();

		std::cout << "Enter Your Choice: ";
		std::getline(std::cin, choice);

		if (!IntTryParseChoice(choice, choice_integer)) {
			std::cout << "Please enter a valid choice next time!\n";
		}
		else 
		{
			switch (choice_integer)
			{
				case 1: 
					std::cout << "You selected 1 \n";
					cashier();
					break;
				case 2: 
					std::cout << "You selected 2 \n";
					invMenu();
					break;
				case 3: 
					std::cout << "You selected 3 \n";
					reports();
					break;
				case 4: 
					std::cout << "You selected 4\n";
					break;
				default:
					std::cout << "Invalid Choice\n";
					break;
			}
		}
	} while (choice != "4");
	
}
