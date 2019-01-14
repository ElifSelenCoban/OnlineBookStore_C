/**
* @file Payment.h
* @Author Didem Nursal KÖME
* @date January 2017
* @brief Includes the Payment class
*
* Includes member functions and parameters of the Payment class
*/
#pragma once
#include<string>
#include<iostream>
using namespace std;
//! A  class.
class Payment
{
public:
	//! A constructor. 
	Payment();
	//! A constructor. 
	Payment(double amount);
	//! A getAmount function
	double getAmount()const;
	//! A setAmount function
	void setAmount(double amount);
	//! A pure virtual  performPayment function
	virtual void performPayment() = 0;
private:
	//A private variable
	double amount;
};