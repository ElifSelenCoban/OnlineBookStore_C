#include "ProductToPurchase.h"

ProductToPurchase::ProductToPurchase()
{
}
/*!
\param product an Product argument.
\param quatity an integer argument.
*/
ProductToPurchase::ProductToPurchase(Product * product, int quatity)
{
	this->product = product;
	this->quatity = quatity;
}
/*!
\return the product
*/
Product* ProductToPurchase::getProduct()const
{
	return product;
}
/*!
\param product an Product argument.
*/
void ProductToPurchase::setProduct(Product * product)
{
	this->product = product;
}
/*!
\return the quatity
*/
int ProductToPurchase::getQuantity()const
{
	return quatity;
}
/*!
\param quantity an integer argument.
*/
void ProductToPurchase::setQuantity(int quantity)
{
	this->quatity = quantity;
}