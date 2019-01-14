#include "MusicCD.h"

MusicCD::MusicCD()
{
}
/*!
\param ID an integer argument.
\param name an string argument.
\param price an double argument.
\param singer an string argument.
\param type an string argument.
*/
MusicCD::MusicCD(int ID, string name, double price, string singer, string type):Product(ID,name,price)
{
	this->singer = singer;
	this->type = type;
}
void MusicCD::printProperties()
{
	cout << "\tID :" << getID() << "\n\tName : " << getName() << "\n\tPrice : " << getPrice() << "\n\tSinger : "
		<< getSinger() << "\n\tType : " << getType() << endl<<endl;
}
/*!
\return the singer
*/
string MusicCD::getSinger()const
{
	return singer;
}
/*!
\param singer an string argument.
*/
void MusicCD::setSinger(string singer)
{
	this->singer = singer;
}
/*!
\return the type
*/
string MusicCD::getType()const
{
	return type;
}
/*!
\param type an string argument.
*/
void MusicCD::setType(string type)
{
	this->type = type;
}