/**
* @file Check.h
* @Author Didem Nursal KÖME
* @date January 2017
* @brief Includes the Check class
*
* Includes member functions and parameters of the Check class
*/
#pragma once
#include"Payment.h"
//! A  class. 
/*!
Class is inheritance class of Payment Class
*/class Check :public Payment
{
public:
	//! A constructor. 
	Check();
	//! A constructor. 
	Check(double amount, string name, string bankID);
	//! A performPayment function
	void performPayment();
	//! A getName function
	string getName()const;
	//! A setName function
	void setName(string name);
	//! A getBankID function
	string getBankID()const;
	//! A setBankID function
	void setBankID(string bankID);
private:
	//A private variable
	string name;
	//A private variable
	string bankID;
};