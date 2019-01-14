#include "Product.h"
#include<string>
using namespace std;

Product::Product()
{ 
	
}
/*!
\param ID an integer argument.
\param name an string argument.
\param price an double argument.
*/
Product::Product(int ID, string name, double price)
{
	this->ID = ID;
	this->name = name;
	this->price = price;
}
/*!
\return the ID
*/
int Product::getID() const
{
	return ID;
}
/*!
\param ID an integer argument.
*/
void Product::setID(int ID)
{
	this->ID = ID;
}
/*!
\return the name
*/
string Product::getName()const
{
	return name;
}
/*!
\param name an string argument.
*/
void Product::setName(string name)
{
	this->name = name;
}
/*!
\return the price
*/
double Product::getPrice()const
{
	return price;
}
/*!
\param price an double argument.
*/
void Product::setPrice(double price)
{
	this->price = price;
}
void Product::printProperties()
{   
}
