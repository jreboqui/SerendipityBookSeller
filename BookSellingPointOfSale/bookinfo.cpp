#include "bookinfo.h"
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void bookInfo(std::string isbn, std::string title, std::string author, std::string publisher, std::string date,
			int qty, double wholesale, double retail)
{
	cout << "Serendipity Booksellers\n";
	cout << "Book Information";

	cout << "ISBN: " << isbn << std::endl;
	cout << "Title: " << title << std::endl;;
	cout << "Author: " << author << std::endl;;
	cout << "Publisher: " << author << std::endl;;
	cout << "Date Added: " << date<< std::endl;;
	cout << "Quantity-On-Hand: " << qty << std::endl;;
	cout << "Wholesale Cost: " << wholesale << std::endl;;
	cout << "Retail Price: " << retail << std::endl;;

}
