
#include "CreditCard.h"
	CreditCard::CreditCard()
{
}
/*!
\param amount an double argument.
\param number an long argument.
\param type an string argument.
\param expDate an string argument.
*/
CreditCard::CreditCard(double amount, long number, string type, string expDate):Payment(amount)
{
	this->number = number;
	this->type = type;
	this->expDate = expDate;
}
/*!
\return the number
*/
long CreditCard::getNumber()const
{
	return number;
}
void CreditCard::setNumber(long number)
{
	this->number = number;
}
/*!
\return the type
*/
string CreditCard::getType()const
{
	return type;
}
void CreditCard::setType(string type)
{
	this->type = type;
}
/*!
\return the expDate
*/
string CreditCard::getExpDate()const
{
	return expDate;
}
void CreditCard::setExpDate(string expDate)
{
	this->expDate = expDate;
}
void CreditCard::performPayment()
{
	cout << "\tHas been paid" << endl;
}
