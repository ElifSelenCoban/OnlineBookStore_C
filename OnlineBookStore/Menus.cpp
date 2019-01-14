#include "Menus.h"
#include<iostream>
using namespace std;

Menus::Menus()
{
	Customer*custumer = new Customer(01, "Fatma", "Kocaeli", "0535686", 10, "ftm@gmail.com", "ftm", "689");
	CustomerList.push_back(custumer);
	Customer*custumer1 = new Customer(02, "Ayse", "Izmir", "0538795", 30, "aayse@gmail.com", "aays", "1");
	CustomerList.push_back(custumer1);
	Customer*custumer2 = new Customer(03, "Didem", "Adana", "053968", 70, "ddm@gmail.com", "didm", "6");
	CustomerList.push_back(custumer2);
	Customer*custumer3 = new Customer(04, "Selen", "Kocaeli", "0535226", 10, "elfslncbn@gmail.com", "slncbn", "10");
	CustomerList.push_back(custumer3);
	Customer*custumer4 = new Customer(05, "Tugce", "Eskisehir", "0586426", 10, "tuceo@gmail.com", "tuce", "9");
	CustomerList.push_back(custumer4);
	Book * boook = new Book(1, "The Name of The Wind", 40, 800, "Patrick Rothfuss", "Ithaki");
	BookList.push_back(boook);
	Book * boook1 = new Book(11, "Mistborn", 32, 670, "Brandon Sanderson", "Akýlcelen");
	BookList.push_back(boook1);
	Book * boook2 = new Book(21, "The Lies of Locke Lamore", 30, 560, "Scott Lynch", "Ithaki");
	BookList.push_back(boook2);
	Magazine* mag = new Magazine(2, "Vogue", 7, 102, "Women");
	MagazineList.push_back(mag);
	Magazine* mag1 = new Magazine(12, "Psikoart", 5, 57, "Art");
	MagazineList.push_back(mag1);
	Magazine* mag2 = new Magazine(22, "Chip", 8, 142, "Computer");
	MagazineList.push_back(mag2);
	MusicCD* CD = new MusicCD(3, "Yellow", 10, "Coldplay", "Altarnate");
	MusicCDList.push_back(CD);
	MusicCD* CD1 = new MusicCD(13, "Wind of Change", 7, "Scorpions", "Rock");
	MusicCDList.push_back(CD1);
	MusicCD* CD3 = new MusicCD(23, "Dream On", 3, "Aerosmith", "Altarnate");
	MusicCDList.push_back(CD3);
}
void Menus::AddCustomer()
{
	long ID;
	string name, username, password, phone, email, address, bonus;
	cout << "\tEnter the name:";
	cin.ignore();
	getline(cin, name);
	for (int i = 0; i < name.length(); i++)
	{
		if ((int)name[i] < 65 || (int)name[i]>122)
		{
			cout << "\tUnsupperted character ! " << endl;
			system("pause");
			return;
		}
		else if ((int)name[i] < 97 && (int)name[i]>90)
		{
			cout << "\tUnsupperted character ! " << endl;
			system("pause");
			return;
		}
	}
	cout << "\tEnter the username : ";
	getline(cin, username);

	cout << "\tEnter the password : ";
	getline(cin, password);

	cout << "\tEnter the phone : ";
	getline(cin, phone);
	for (int i = 0; i < phone.length(); i++)
	{
		if ((int)phone[i] > 57 || (int)phone[i] < 48)
		{
			cout << "Unsupperted character ! " << endl;
			system("pause");
			return;
		}
	}
	cout << "\tEnter the email : ";
	getline(cin, email);

	cout << "\tEnter the addres : ";
	getline(cin, address);
	ID = CustomerList.size() + 1;
	Customer *custumer = new Customer(ID, name, address, phone, 0, email, username, password);
	CustomerList.push_back(custumer);
}
void Menus::ShowProduct()
{
	if (!BookList.empty())
	{
		cout << "\n\tBOOK" << endl;
		for (int i = 0; i < BookList.size(); i++)
		{
			BookList[i]->printProperties();
		}cout << endl;
	}
	if (!MagazineList.empty())
	{
		cout << "\n\tMAGAZINE" << endl;
		for (int i = 0; i < MagazineList.size(); i++)
		{
			MagazineList[i]->printProperties();
		}cout << endl;
	}
	if (!MusicCDList.empty())
	{
		cout << "\n\tMUSIC CD" << endl;
		for (int i = 0; i < MusicCDList.size(); i++)
		{
			MusicCDList[i]->printProperties();
		}cout << endl;
	}
}
void Menus::AddProduct()
{
	int a;
	do {
		cout << "\t+-------------------------------------+\n";
		cout << "\t|         1 - Add Book                |\n";
		cout << "\t|         2 - Add Magazine            |\n";
		cout << "\t|         3 - Add MusicCD             |\n";
		cout << "\t|         4 - Back to Menu            |\n";
		cout << "\t+-------------------------------------+\n";
		cout << "\tChoose one : ";
		cin >> a;
		if (a == 1)
		{
			string bookname, author, publisher;
			int page;

			cout << "\tEnter the book name : ";
			cin.ignore();
			getline(cin, bookname);
			cout << "\tEnter the autor name : ";
			getline(cin, author);
			cout << "\tEnter the publisher name : ";
			getline(cin, publisher);
			cout << "\tEnter the page : ";
			cin >> page;
			long ID = BookList.size() *10+1;
			double price;
			cout << "\tEnter the price : ";
			cin >> price;
			Book *newbook = new Book(ID, bookname, price, page, author, publisher);
			BookList.push_back(newbook);
		}
		if (a == 2)
		{
			int Issue;
			string type, Magazinename;
			double price;

			cout << "\tEnter the type : ";
			cin.ignore();
			getline(cin, type);
			cout << "\tEnter the magazine name : ";
			getline(cin, Magazinename);
			cout << "\tEnter the price : ";
			cin >> price;
			cout << "\tEnter the Issue : ";
			cin >> Issue;
			long ID = MagazineList.size()*10+2;
			Magazine *newMagazine = new Magazine(ID, Magazinename, price, Issue, type);
			MagazineList.push_back(newMagazine);
		}
		if (a == 3)
		{
			string type, name, singer;
			double price;
			cin.ignore();
			cout << "\tEnter the type : ";
			getline(cin, type);
			cout << "\tEnter the singer : ";
			getline(cin, singer);
			cout << "\tEnter the music name : ";
			getline(cin, name);
			cout << "\tEnter the price : ";
			cin >> price;
			long ID = MusicCDList.size() * 10+3 ;
			MusicCD *newMusicCD = new MusicCD(ID, name, price, singer, type);
			MusicCDList.push_back(newMusicCD);
		}
		if (a == 4)
		{
			system("cls");
			break;
		}
	} while (a != 4);
}
void Menus::CustomerMenu()
{
	int _choice;
	do
	{
		cout << "\t+-------------------------------------+\n";
		cout << "\t|           Customer Menu             |\n";
		cout << "\t+-------------------------------------+\n";
		cout << "\t|       1 - Add New Customer          |\n";
		cout << "\t|       2 - Show Customers            |\n";
		cout << "\t|       3 - Back to Menu              |\n";
		cout << "\t+-------------------------------------+\n ";
		cout << "\tChoose one : ";
		cin >> _choice;

		if (_choice == 1)
		{
			AddCustomer();
		}
		else if (_choice == 2)
		{
			cout << "\t+-------------------------------------+\n";
			cout << "\t|           Customer List             |\n";
			cout << "\t+-------------------------------------+\n";
			for (int i = 0; i < CustomerList.size(); i++)
			{
				cout << "\t\t" << CustomerList[i]->getCustumerID() << "\t" << CustomerList[i]->getName() << endl;
			}
		}
		else	if (_choice == 3)
		{
			system("cls");
			break;
		}
	} while (_choice != 3);
};

void Menus::Item()
{
	int a;
	do {
		cout << "\t+-------------------------------------+\n";
		cout << "\t|              Item Menu              |\n";
		cout << "\t+-------------------------------------+\n";
		cout << "\t|         1 - Add new Items           |\n";
		cout << "\t|         2 - Show Items              |\n";
		cout << "\t|         3 - Back to Menu            |\n";
		cout << "\t+-------------------------------------+\n";
		cout << "\tChoose one :";
		cin >> a;
		if (a == 1) {
			AddProduct();
		}
		if (a == 2) {
			ShowProduct();
		}
		if (a == 3) { system("cls"); break; }
	} while (a != 3);
}
void Menus::Shopping()
{
	ShoppingCart * shopcart = new ShoppingCart;

	bool loggedin = false;
	int customerindex;
	int b;
	do {
		cout << "\t+-------------------------------------+\n";
		cout << "\t|           Shopping Menu             |\n";
		cout << "\t+-------------------------------------+\n";
		cout << "\t|          1 - Login                  |\n";
		cout << "\t|          2 - Add Product            |\n";
		cout << "\t|          3 - Remove Product         |\n";
		cout << "\t|          4 - List All Product       |\n";
		cout << "\t|          5 - List Shopping Cart     |\n";
		cout << "\t|          6 - Show Bonus             |\n";
		cout << "\t|          7 - Use Bonus              |\n";
		cout << "\t|          8 - Place Order            |\n";
		cout << "\t|          9 - Cancel Order           |\n";
		cout << "\t|         10 - Show Invoice           |\n";
		cout << "\t|         11 - Back to Menu           |\n";
		cout << "\t+-------------------------------------+\n";
		cout << "\tChoose One : ";
		cin >> b;
		if (b == 1)
		{
			string login, passwordd;
			cout << "\tEnter the username : ";
			cin.ignore();
			getline(cin, login);
			cout << "\tEnter the password : ";
			cin >> passwordd;
			
			for (int i = 0; i < CustomerList.size(); i++)
			{
				if (CustomerList[i]->checkAccount(login, passwordd))
				{
					cout << "\tLogged in..." << endl;
					shopcart->setCustomer(CustomerList[i]);
					customerindex = i;
					loggedin = true;
				}
			}
			if (!loggedin)
			{
				cout << "\tNot Successfull" << endl;
			}
		}
		else if (b == 2)
		{
			if (loggedin)
			{
				ShowProduct();
				long id;
				cout << "\n\tEnter Product ID : ";
				cin >> id;

				
				bool flag = false;
				if (id % 10 == 1)
				{
					for (int i = 0; i < BookList.size(); i++)
					{
						if (BookList[i]->getID() == id)
						{
							shopcart->addProduct(BookList[i]); flag = true;
						}
						
					}
					
				}
				if (id % 10 == 2)
				{
					for (int i = 0; i < MagazineList.size(); i++)
					{
						
						if (MagazineList[i]->getID() == id)
						{
							shopcart->addProduct(MagazineList[i]); flag = true;
						
						}
					}
					
				}
				if (id % 10 == 3)
				{
					for (int i = 0; i < MusicCDList.size(); i++)
					{
						if (MusicCDList[i]->getID() == id)
						{
							shopcart->addProduct(MusicCDList[i]); flag = true;
						}

					}
					
				}if (!flag)
					{
						cout << "\tItem List Doesn't Contain Anything..." << endl;
					}
			}
			else cout << "\tYou Should Login First..." << endl;
		}
		else if (b == 3) 
		{
			if (loggedin)
			{
				shopcart->printProduct();
				long id;
				cout << "\tEnter Product ID : ";
				cin >> id;
				
				bool flag = false;
				if (id % 10 == 1)
				{
					for (int i = 0; i < BookList.size(); i++)
					{
						if (BookList[i]->getID() == id)
						{
							shopcart->removeProduct(BookList[i]);
							flag = true;
						}
					}
					if (!flag)
					{
						cout << "\tItem List Doesn't Contain Anything..." << endl;
					}
				}
				if (id % 10 == 2)
				{
					for (int i = 0; i < MagazineList.size(); i++)
					{
						if (MagazineList[i]->getID() == id)
						{
							shopcart->removeProduct(MagazineList[i]); flag = true;
						}
					}
					if (!flag)
					{
						cout << "\tItem List Doesn't Contain Anything..." << endl;
					}
				}
				if (id % 10 == 3)
				{
					for (int i = 0; i < MusicCDList.size(); i++)
					{
						if (MusicCDList[i]->getID() == id)
						{
							shopcart->removeProduct(MusicCDList[i]); flag = true;
						}

					}
					if (!flag)
					{
						cout << "\tItem List Doesn't Contain Anything..." << endl;
					}
				}
				else cout << "\tYou Should Login First..." << endl;
			}
		}
		else if (b == 4) 
		{
			if (loggedin)
			{
				ShowProduct();
			}
			else cout << "\tYou Should Login First..." << endl;
		}
		else if (b == 5)
		{
			if (loggedin)
			{ 
				shopcart->printProduct();
			}
			else cout << "\tYou Should Login First..." << endl;
		}
		else if (b == 6) 
		{
			if (loggedin) 
			{
				cout << "\tYour bonus: " << CustomerList[customerindex]->getBonus() << endl;
			}
			else cout << "\tYou Should Login First..." << endl;
		}
		else if (b == 7)
		{
			if (loggedin) 
			{
				CustomerList[customerindex]->useBonus();
			}
			else cout << "\tYou Should Login First..." << endl;
		}
		else if (b == 8)
		{
			if (loggedin)
			{
				shopcart->placeOrder();
			}
			else cout << "\tYou Should Login First..." << endl;;
		}
		else if (b == 9) 
		{
			if (loggedin)
			{
				shopcart->cancelOrder();
			}
			else cout << "\tYou Should Login First..." << endl;
		}
		else if (b == 10) 
		{ 
			if (loggedin)
			{
				shopcart->showInvoice();
			}
			else cout << "\tYou Should Login First..." << endl;
			
		}
		else if (b == 11) 
		{
			system("cls"); 
			break;
		}
	} while (b != 11);
}
void Menus::Main()
{
	int choice;
	do
	{
		cout << "\t+-------------------------------------+\n";
		cout << "\t|               MAIN MENU             |\n";
		cout << "\t+-------------------------------------+\n";
		cout << "\t|             1 - Customer            |\n";
		cout << "\t|             2 - Item                |\n";
		cout << "\t|             3 - Shopping            |\n";
		cout << "\t|             4 - Exit                |\n";
		cout << "\t+-------------------------------------+\n";
		cout << "\tChoose one : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			CustomerMenu();
			break;
		case 2:
			Item();
			break;
		case 3:
			Shopping();
			break;
		case 4:
			cout << "\tEnd of Program.\n";
			system("cls");
			break;
		default:
			cout << "\tNot a Valid Choice. \n"
				<< "\tChoose again.\n";
			break;
		}

	} while (choice != 4);

}
Menus::~Menus()
{
}
