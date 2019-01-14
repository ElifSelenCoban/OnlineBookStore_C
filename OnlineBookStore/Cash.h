/**
* @file Cash.h
* @Author Didem Nursal KÖME
* @date January 2017
* @brief Includes the Cash class
*
* Includes member functions and parameters of the Cash class
*/
#pragma once
#include"Payment.h"
//! A  class.
/*! 
Class is inheritance class of Payment Class
*/ 
class Cash : public Payment
{
public:
	//! A constructor. 
	Cash();
	//! A constructor. 
	Cash(double amount);
	//! A performPayment function
	void performPayment();
};