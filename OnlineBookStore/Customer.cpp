#include "Customer.h"
Customer::Customer()
{
}
/*!
\param custumerID an long argument.
\param name an string argument.
\param address an string argument.
\param phone an string argument.
\param bonus an double argument.
\param email an string argument.
\param username an string argument.
\param password an string argument.
*/
Customer::Customer(long custumerID, string name, string address, string phone, double bonus, string email, string username, string password)
{
	this->customerID = custumerID;
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->bonus = bonus;
	this->email = email;
	this->username = username;
	this->password = password;
	flag = false;
}
void Customer::sendBill()
{
	cout << "\t+-------------------------------------+\n";
	cout << "\t|                BILL                 |\n";
	cout << "\t+-------------------------------------+\n";
	cout << "\tName:" << name << endl;
	cout << "\tAdress:" << address << endl;
	cout << "\tPhone:" << phone << endl;
	cout << "\tEmail:" << email << endl;
	cout << "\tBonus:" << bonus << endl;
}
/*!
\return the customerID
*/
long Customer::getCustumerID()const
{
	return customerID;
}
/*!
\param custumerID an long argument.
*/
void Customer::setCustumerID(long custumerID)
{
	this->customerID = custumerID;
}
/*!
\return the name
*/
string Customer::getName()const
{
	return name;
}
/*!
\param name an string argument.
*/
void Customer::setName(string name)
{
	this->name = name;
}
/*!
\return the address
*/
string Customer::getAddress()const
{
	return address;
}
/*!
\param address an string argument.
*/
void Customer::setAddress(string address)
{
	this->address = address;
}
/*!
\return the phone
*/
string Customer::getPhone()const
{
	return phone;
}
/*!
\param phone an string argument.
*/
void Customer::setPhone(string phone)
{
	this->phone = phone;
}
/*!
\return the bonus
*/
double Customer::getBonus()const
{
	return bonus;
}
/*!
\param bonus an double argument.
*/
void Customer::setBonus(double bonus)
{
	this->bonus = bonus;
}
/*!
\return the email;
*/
string Customer::getEmail()const
{
	return email;
}
void Customer::setEmail(string email)
{
	this->email = email;
}
/*!
\return the username;
*/
string Customer::getUsername()const
{
	return username;
}
void Customer::setUsername(string username)
{
	this->username = username;
}
/*!
\return the password;
*/
string Customer::getPassword()const
{
	return password;
}
/*!
\param password an string argument.
*/
void Customer::setPassword(string password)
{
	this->password = password;
}
/*!
\param username an string argument.
\param password an string argument.
\return the true/false
*/
bool Customer::checkAccount(string username, string password)
{
	if (this->username == username && this->password == password)
		return true;
	else
		return false;
}
/*!
\param bonus an double argument.
*/
void Customer::addBonus(double bonus)
{
	if (bonus > 0)
		this->bonus += (bonus / 100);
}
void Customer::useBonus()
{
	flag = true;
}
/*!
\return the flag
*/
bool Customer::getBonusFlag() const
{
	return flag;
}
