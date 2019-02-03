#include "common.h"
#include "invmenu.h"
#include "pch.h"

#include <iostream>
#include <sstream>

bool IntTryParse(std::string input, int& output);
void lookUpBook(); //option 1
void addBook(); //option 2
void editBook(); //option 3
void deleteBook(); //option 4

void invMenu()
{
	std::string choice;
	int choice_integer = 0;

	do {
		std::cout << "Serendipity Booksellers\n";
		std::cout << "Inventory Database\n";

		std::cout << "\t1. Look-Up a Book\n";
		std::cout << "\t2. Add a Book\n";
		std::cout << "\t3. Edit a Book's Record\n";
		std::cout << "\t4. Delete a Book\n";
		std::cout << "\t5. Return to the Main Menu\n";

		std::cout << "Enter Your Choice: ";
		//Data Validation
		std::getline(std::cin, choice);
		if (!IntTryParse(choice, choice_integer)) {
			std::cout << "\nPlease enter a valid number 1-5\n";
		}
		else
		{
			switch (choice_integer)
			{
			case 1: 
				lookUpBook();
				break;
			case 2: 
				addBook();
				break;
			case 3:
				editBook();
				break;
			case 4:
				deleteBook();
				break;
			case 5: 
				std::cout << "\nExiting\n";
				break;

			}//end of switch
		} //end of else


	} while (choice != "5");
}

//option 1
void lookUpBook() {
	std::cout << "\nYou selected 1 \n";
} 

//option 2
void addBook() {
	std::cout << "\nYou selected 2 \n";
}

//option 3
void editBook() {
	std::cout << "\nYou selected 3 \n";

}

//option 4
void deleteBook(){
	std::cout << "\nYou selected 4 \n";
}

