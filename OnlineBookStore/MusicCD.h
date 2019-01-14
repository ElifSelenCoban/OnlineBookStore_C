/**
* @file MusicCD.h
* @Author Tuðçe Özgen
* @date January 2017
* @brief Includes the MusicCD class
*
* Includes member functions and parameters of the MusicCD class
*/
#pragma once
#include"Product.h"
#include<string>
using namespace std;
//! A  class.
/*!
Class is inheritance class of Product Class
*/
class MusicCD : public Product
{
public:
	//! A constructor. 
	MusicCD();
	//! A constructor. 
	MusicCD(int ID, string name, double price, string singer, string type);
	//! A printProperties function
	void printProperties();
	//! A getSinger function
	string getSinger()const;
	//! A setSinger function
	void setSinger(string singer);
	//! A getType function
	string getType()const;
	//! A setType function
	void setType(string type);
private:
	//A private variable
	string singer;
	//A private variable
	string type;
};