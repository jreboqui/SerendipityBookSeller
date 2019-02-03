#include "cashier.h"
#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void cashier()
{
	const double SALES_TAX = 0.06; //6% sales tax

	std::string choice;
	std::string date;
	std::string isbn;
	std::string title;
	int quantity;
	double price;
	double subtotal;
	double tax;
	double total;

	do {
		std::cout << "Serendipity Booksellers\n";
		std::cout << "Cashier Module\n\n";

		std::cout << "Enter Date: ";
		getline(std::cin, date);  //takes input from std::cin and pass it to date variable   

		std::cout << "Quantity of the Book: ";
		std::cin >> quantity;
		std::cin.ignore(); //ignore the new line character when enter is pressed

		std::cout << "ISBN: ";
		getline(std::cin, isbn);

		std::cout << "Title: ";
		getline(std::cin, title);

		std::cout << "Price: ";
		std::cin >> price;
		std::cin.ignore();

		//Calculations
		subtotal = quantity * price;
		tax = subtotal * SALES_TAX;
		total = subtotal + tax;


		std::cout << "Date: " << date << " \n\n";

		std::cout << "Qty\tISBN\t\tTitle\t\t\t\tPrice\t\tTotal\n ";
		std::cout << "________________________________________________________________________";
		std::cout << "\n\n\n";

		std::cout << quantity << "\t"; //display quantity
		std::cout << std::left << std::setw(14) << isbn << "\t"; //display ISBN
		std::cout << left << setw(26) << title << "\t$ "; //display title
		std::cout << fixed << showpoint << right << setprecision(2); //format numbers
		std::cout << setw(6) << price << "\t$ "; //display price
		std::cout << setw(6) << subtotal << "\n\n"; //display subtotal in line

		//calculated totals
		std::cout << "\t\tSubtotal\t\t\t\t\t\t$ ";
		std::cout << setw(6) << subtotal << "\n";
		std::cout << "\t\tTax\t\t\t\t\t\t\t$ ";
		std::cout << setw(6) << tax << "\n";
		std::cout << "\t\tTotal\t\t\t\t\t\t\t$ ";
		std::cout << setw(6) << total << "\n\n";

		std::cout << "\n\nThank you for shopping at Serendipity\n\n";

		while (1) {
			std::cout << "Would you like to do another transaction? (Y/N): ";
			std::getline(std::cin, choice);

			if ((choice != "N") && (choice != "Y")) {
				std::cout << "Please enter a valid option" << std::endl;
			}
			else {
				break;
			}
		}
		
	} while (choice != "N");
}