#include"Book.h"

Book::Book()
{
}
/*!
\param ID an integer argument.
\param name an string argument.
\param price an double argument.
\param page an integer argument.
\param author an string argument.
\param publisher an string argument.
*/
Book::Book(int ID,string name,double  price,int page, string author, string publisher):Product(ID,name,price)
{
	this->author = author;
	this->page = page;
	this->publisher = publisher;
}
void Book::printProperties()
{
	cout << "\tID : " << getID() << "\n\tName : " << getName() << "\n\tPrice : " << getPrice()
		<< "\n\tAuthor : " << getAuthor() << "\n\tPublisher : " << getPublisher() << "\n\tPage : " << getPage() << endl << endl;
}
/*!
\return the author
*/
string Book::getAuthor()const
{
	return author;
}
/*!
\param author an string argument.
*/
void Book::setAuthor(string author)
{
	this->author = author;
}
/*!
\return the publisher
*/
string Book::getPublisher()const
{
	return publisher;
}
/*!
\param publisher an string argument.
*/
void Book::setPublisher(string publisher)
{
	this->publisher = publisher;
}
/*!
\return the page
*/
int Book::getPage()const
{
	return page;
}
/*!
\param page an integer argument.
*/
void Book::setPage(int page)
{
	this->page = page;
}