/**
* @file Book.h
* @Author Tuðçe Özgen, Elif Selen Çoban, Ayþe Ýlkay, Didem Nursal Köme
* @date January 2017
* @brief Includes the Book class
*
* Includes member functions and parameters of the Book class
*/
#pragma once
#include<vector>
#include"Book.h"
#include"Cash.h"
#include"Check.h"
#include"CreditCard.h"
#include"Magazine.h"
#include"MusicCD.h"
#include"Customer.h"
#include"ShoppingCart.h"
//! A  class. 
class Menus
{
private : 
	//A private vector variable
	vector<Customer*> CustomerList;
	//A private vector variable
	vector<Product*> BookList;
	//A private vector variable
	vector<Product*> MusicCDList;
	//A private vector variable
	vector<Product*> MagazineList;
public:
	//! A constructor. 
	Menus();
	//! A AddProduct function
	void AddProduct();
	//! A ShowProduct function
	void ShowProduct();
	//! A AddCustomer function
	void AddCustomer();
	//! A CustomerMenu function
	void CustomerMenu();
	//! A Item function
	void Item();
	//! A Shopping function
	void Shopping();
	//! A Main function
	void Main();
	//! A destructor. 
	~Menus();
};

