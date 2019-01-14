#include "Cash.h"
Cash::Cash()
{
}
/*!
\param amount an double argument.
*/
Cash::Cash(double amount):Payment(amount)
{
}
void Cash::performPayment()
{
	cout << "\tHas been paid" << endl;
}