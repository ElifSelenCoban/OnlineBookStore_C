#include "Check.h"
Check::Check()
{
}
/*!
\param amount an double argument.
\param name an string argument.
\param bankID an string argument.
*/
Check::Check(double amount, string name, string bankID) :Payment(amount)
{
	this->name = name;
	this->bankID = bankID;
}
void Check::performPayment()
{
	cout << "\tHas been paid" << endl;
}
/*!
\return the name 
*/
string Check::getName()const
{
	return name;
}
/*!
\param name an string argument.
*/
void Check::setName(string name)
{
	this->name = name;
}
/*!
\return the bankID 
*/
string Check::getBankID()const
{
	return bankID;
}
void Check::setBankID(string bankID)
{
	this->bankID = bankID;
}