#include "reports.h"
#include "bookinfo.h"
#include "common.h"

#include "pch.h"
#include <iostream>
#include <string>

bool IntTryParse(std::string input, int& output);
void bookInfo(std::string isbn, std::string title, std::string author, std::string publisher, std::string date,
	int qty, double wholesale, double retail);

void reports()
{
	std::string choice;
	int choice_integer;

	do {
		std::cout << "Serendipity Booksellers\n";
		std::cout << "\tReports\n\n";

		std::cout << "1. Inventory Listing\n";
		std::cout << "2. Inventory Wholesale Value\n";
		std::cout << "3. Inventory Retail Value\n";
		std::cout << "4. Listing by Quantity\n";
		std::cout << "5. Listing by Cost\n";
		std::cout << "6. Listing by Age\n";
		std::cout << "7. Return to the Main Menu\n";

		std::cout << "Enter Your Choice: ";
		std::cin >> choice;
		/* Data Validation with switch branching(for later use) */
		if (!IntTryParse(choice, choice_integer)) {
			std::cout << "Please enter a valid choice next time!\n";
		}
		else
		{
			switch (choice_integer)
			{
			case 1: std::cout << "You selected 1 \n";
				break;
			case 2: std::cout << "You selected 2 \n";
				break;
			case 3: std::cout << "You selected 3 \n";
				break;
			case 4: std::cout << "You selected 4 \n";
				break;
			case 5: std::cout << "You selected 5 \n";
				break;
			case 6: std::cout << "You selected 6 \n";
				break;
			case 7: std::cout << "You selected 7 \n";
				break;

			}//end of switch
		} //end of else

	} while (choice != "7");
}