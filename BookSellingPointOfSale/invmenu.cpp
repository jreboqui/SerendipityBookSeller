#include "pch.h"
#include "common.h"
#include "invmenu.h"
#include "bookinfo.h"

#include <iostream>
#include <sstream>

const int SIZE = 20;

extern std::string bookTitle[SIZE];
extern std::string isbn[SIZE];
extern std::string author[SIZE];
extern std::string publisher[SIZE];
extern std::string dateAdded[SIZE];
extern int qtyOnHand[SIZE];
extern double wholesale[SIZE];
extern double retail[SIZE];


bool IntTryParse(std::string input, int& output);
bool DoubleTryParse(std::string input, double& output);
void lookUpBook(); //option 1
void addBook(); //option 2
void editBook(); //option 3
void deleteBook(); //option 4
void promptUserForBookDetails(int index);
void bookInfo(std::string isbn, std::string title, std::string author, std::string publisher, std::string date,
	int qty, double wholesale, double retail);


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
	//search for the bookTitle, this version has it
	//exactly as entered
	std::string titleToSearch;
	bool found = false;

	std::cout << "\nPlease enter a book title to search: ";
	std::getline(std::cin, titleToSearch);

	for (int index = 0; index < SIZE; index++) {
		if (bookTitle[index] == titleToSearch) {
			std::cout << "Found book title at: " << index << std::endl;
			found = true;
			bookInfo(isbn[index], bookTitle[index], author[index], publisher[index], dateAdded[index], qtyOnHand[index],
				wholesale[index], retail[index]);
		}
	}
	//prompt the user for a book title

	if (!found) {
		std::cout << "Can't find book title!\n";
	}
} 

//option 2
void addBook() {
	
	bool flag = false;
	//find an index with an empty stringTitle
	for (int index = 0; index < SIZE; index++) {
		if (bookTitle[index] == "")
		{
			std::cout << "Found space at: " << index << std::endl;
			std::cout << "\nPlease enter book information: \n" << std::endl;

			promptUserForBookDetails(index);

			flag = true;
			break;
		}
	}

	if (!flag) {
		std::cout << "No more books may be added.\n\n";
	}


}

//option 3
void editBook() {
	std::cout << "\nYou selected 3 \n";

}

//option 4
void deleteBook(){
	std::cout << "\nYou selected 4 \n";
}


void promptUserForBookDetails(int index) {
	
	std::string input;
	int input_integer;

	std::cout << "Title: ";
	std::getline(std::cin, bookTitle[index]);

	std::cout << "ISBN: ";
	std::getline(std::cin, isbn[index]);

	std::cout << "Author: ";
	std::getline(std::cin, author[index]);

	std::cout << "Publisher: ";
	std::getline(std::cin, publisher[index]);

	std::cout << "Date added (MM-DD-YYYY): ";
	std::getline(std::cin, dateAdded[index]);
	
	std::cout << "Quantity: ";
	qtyOnHand[index] = promptUntilValidInt();
	
	std::cin.ignore();

	std::cout << "Wholesale Price: ";
	wholesale[index] = promptUntilValidDouble();
	std::cin.ignore();

	std::cout << "Retail Price: ";
	retail[index] = promptUntilValidDouble();
	std::cin.ignore();

	std::cout << "\nRecord was entered\n\n";
}

