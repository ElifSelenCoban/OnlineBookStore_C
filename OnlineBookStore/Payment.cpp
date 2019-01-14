#include "Payment.h"

Payment::Payment()
{
}
/*!
\param amount an double argument.
*/
Payment::Payment(double amount)
{
	this->amount = amount;
}
/*!
\return the  amount;
*/
double Payment::getAmount()const
{
	return amount;
}
/*!
\param amount an double argument.
*/
void Payment::setAmount(double amount)
{
	this->amount = amount;
}
void Payment::performPayment()
{
}