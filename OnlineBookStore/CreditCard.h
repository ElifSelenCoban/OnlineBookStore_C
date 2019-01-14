/**
* @file Creditcard.h
* @Author Didem Nursal KÖME
* @date January 2017
* @brief Includes the Creditcard class
*
* Includes member functions and parameters of the Creditcard class
*/
#pragma once
#include"Payment.h"
//! A  class. 
/*!
/*! Class is inheritance class of Payment Class
*/
class CreditCard :public Payment
{
public:
	//! A constructor. 
	CreditCard();
	//! A constructor. 
	CreditCard(double amount, long number, string type, string expDate);
	//! A getNumber function
	long getNumber()const;
	//! A setNumber function
	void setNumber(long number);
	//! A getType function
	string getType()const;
	//! A setType function
	void setType(string type);
	//! A getExpDate function
	string getExpDate()const;
	//! A setExpDate function
	void setExpDate(string expDate);
	//! A performPayment function
	void performPayment();
private:
	//A private variable
	long number;
	//A private variable
	string type;
	//A private variable
	string expDate;
};