/**
* @file ShoppingCart.h
* @Author Elif Selen ÇOBAN
* @date January 2017
* @brief Includes the ShoppingCart class
*
* Includes member functions and parameters of the ShoppingCart class
*/
#pragma once
#include<iostream>
#include<string>
#include"Payment.h"
#include"Customer.h"
#include"Cash.h"
#include"Check.h"
#include"CreditCard.h"
#include"ProductToPurchase.h"
#include<list>
using namespace std;
//! A  class.
class ShoppingCart
{
public:
	//! A getPaymentMethod function
	Payment* getPaymentMethod()const;
	//! A setPaymentMethod function
	void setPaymentMethod(Payment* paymentMethod);
	//! A getCustomer function
	Customer* getCustomer()const;
	//! A setCustomer function
	void setCustomer(Customer* customer);
	//! A setBonusUsed function
	void setBonusUsed();
	//! A addProduct function
	void addProduct(Product* product);
	//! A removeProduct function
	void removeProduct(Product* product);
	//! A placeOrder function
	void placeOrder();
	//! A cancelOrder function
	void cancelOrder();
	//! A printProduct function
	void printProduct();
	//! A showInvoice function
	void showInvoice();
private:
	//A private list  variable
	list<ProductToPurchase*> productsToPurchase;
	//A private   variable
	Payment* paymentMethod;
	//A private variable
	Customer* customer;
	//A private  variable
	bool isBonusUsed;
};
