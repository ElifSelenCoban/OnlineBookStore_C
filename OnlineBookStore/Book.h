/**
* @file Book.h
* @Author Tuðçe Özgen
* @date January 2017
* @brief Includes the Book class
*
* Includes member functions and parameters of the Book class
*/
#pragma once
#include"Product.h"
#include<string>
using namespace std;
//! A  class.
/*!
Class is inheritance class of Product Class
*/
class Book:public Product
{
public:
	//! A constructor. 
	Book();
	//! A constructor. 
	Book(int ID,string name,double price  ,int page, string author, string publisher);
	//! A printProperties function
	void printProperties();
	//! A getAuthor function
	string getAuthor()const;
	//! A setAuthor function
	void setAuthor(string author);
	//! A getPublisher function
	string getPublisher()const;
	//! A setPublisher function
	void setPublisher(string publisher);
	//! A getPage function
	int getPage()const;
	//! A setPage function
	void setPage(int page);
private:
	//A private variable
	string author;
	//A private variable
	string publisher;
	//A private variable
	int page;
};
