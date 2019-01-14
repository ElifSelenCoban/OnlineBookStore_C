/**
* @file Product.h
* @Author Ayþe Ýlkay
* @date January 2017
* @brief Includes the Product class
*
* Includes member functions and parameters of the Product class
*/
#pragma once
#include<iostream>
using namespace std;
//! A  class.
class Product
{
public:
	//! A constructor. 
	Product();
	//! A constructor. 
	Product(int ID, string name, double price);
	//! A getID function
	int getID()const;
	//! A setID function
	void setID(int ID);
	//! A getName function
	string getName()const;
	//! A setName function
	void setName(string name);
	//! A getPrice function
	double getPrice()const;
	//! A setPrice function
	void setPrice(double price);
	//! A virtual printProperties function
	virtual void printProperties()=0;
private:
	//A private variable
	int ID;
	//A private variable
	string name;
	//A private variable
	double price;
};