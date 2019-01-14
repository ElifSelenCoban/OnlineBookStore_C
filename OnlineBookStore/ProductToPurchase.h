/**
* @file ProductToPurchase.h
* @Author Ayþe Ýlkay
* @date January 2017
* @brief Includes the ProductToPurchase class
*
* Includes member functions and parameters of the ProductToPurchase class
*/
#pragma once
#include"Product.h"
//! A  class.
class ProductToPurchase
{
public:
	//! A constructor. 
	ProductToPurchase();
	//! A constructor. 
	ProductToPurchase(Product* product, int quatity);
	//! A getProduct function
	Product * getProduct()const;
	//! A setProduct function
	void setProduct(Product* product);
	//! A getQuantity function
	int getQuantity()const;
	//! A setQuantity function
	void setQuantity(int quantity);
private:
	//A private variable
	Product* product;
	//A private variable
	int quatity;
};