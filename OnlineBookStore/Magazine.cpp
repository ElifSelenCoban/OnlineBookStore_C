#include "Magazine.h"

Magazine::Magazine()
{
}
/*!
\param ID an integer argument.
\param name an string argument.
\param price an double argument.
\param Issue an integer argument.
\param type an string argument.
*/
Magazine::Magazine(int ID, string name, double price, int Issue, string type) :Product(ID, name, price)
{
	this->Issue = Issue;
	this->type = type;
}
void Magazine::printProperties()
{
	cout << "\tID : " << getID() << "\n\tName : " << getName() << "\n\tPrice :" << getPrice()
		<< "\n\tIssue : " << getIssue() << "\n\tType : " << getType() << endl << endl;
}
/*!
\return the Issue
*/
int Magazine::getIssue()const
{
	return Issue;
}
/*!
\param Issue an integer argument.
*/
void Magazine::setIssue(int Issue)
{
	this->Issue = Issue;
}
/*!
\return the type
*/
string Magazine::getType()const
{
	return type;
}
/*!
\param type an string argument.
*/
void Magazine::setType(string type)
{
	this->type = type;
}