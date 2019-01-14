/**
* @file Customer.h
* @Author Elif Selen ÇOBAN
* @date January 2017
* @brief Includes the Customer class
*
* Includes member functions and parameters of the Customer class
*/
#pragma once
#include<iostream>
#include<string>
using namespace std;
//! A  class. 
class Customer
{
public:
	//! A constructor. 
	Customer();
	//! A constructor. 
	Customer(long custumerID, string name, string address, string phone, double bonus,
		string email, string username, string password);
	//! A sendBill function
	void sendBill();
	//! A getCustumerID function
	long getCustumerID()const;
	//! A setCustumerID function
	void setCustumerID(long custumerID);
	//! A getName function
	string getName()const;
	//! A setName function
	void setName(string name);
	//! A getAddress function
	string getAddress()const;
	//! A setAddress function
	void setAddress(string address);
	//! A getPhone function
	string getPhone()const;
	//! A setPhone function
	void setPhone(string phone);
	//! A getBonus function
	double getBonus()const;
	//! A setBonus function
	void setBonus(double bonus);
	//! A getEmail function
	string getEmail()const;
	//! A setEmail function
	void setEmail(string email);
	//! A getUsername function
	string getUsername()const;
	//! A setUsername function
	void setUsername(string username);
	//! A getPassword function
	string getPassword()const;
	//! A setPassword function
	void setPassword(string password);
	//! A checkAccount function
	bool checkAccount(string username, string password);
	//! A addBonus function
	void addBonus(double bonus);
	//! A useBonus function
	void useBonus();
	//! A getBonusFlag function
	bool getBonusFlag()const;
	
private:
	//A private variable
	bool flag;
	//A private variable
	long customerID;
	//A private variable
	string name;
	//A private variable
	string address;
	//A private variable
	string phone;
	//A private variable
	double bonus;
	//A private variable
	string email;
	//A private variable
	string username;
	//A private variable
	string password;
	
};