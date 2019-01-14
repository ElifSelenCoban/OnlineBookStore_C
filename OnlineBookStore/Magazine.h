/**
* @file Magazine.h
* @Author Tuðçe Özgen
* @date January 2017
* @brief Includes the Magazine class
*
* Includes member functions and parameters of the Magazine class
*/
#pragma once
#include"Product.h"
#include<string>
using namespace std;
//! A  class.
/*!
Class is inheritance class of Product Class
*/
class Magazine:public Product
{
public:
	//! A constructor. 
	Magazine();
	//! A constructor. 
	Magazine(int ID, string name, double price, int Issue, string type);
	//! A virtual printProperties function
	virtual void printProperties();
	//! A getIssue function
	int getIssue()const;
	//! A setIssue function
	void setIssue(int Issue);
	//! A getType function
	string getType()const;
	//! A setType function
	void setType(string type);
private:
	//A private variable
	int Issue;
	//A private variable
	string type;
};