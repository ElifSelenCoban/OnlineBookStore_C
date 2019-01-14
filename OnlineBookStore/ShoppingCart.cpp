#include "ShoppingCart.h"
/*!
\return the paymentMethod
*/
Payment * ShoppingCart::getPaymentMethod()const
{
	return paymentMethod;
}/*!
\param paymentMethod an Payment class.
*/
void ShoppingCart::setPaymentMethod(Payment * paymentMethod)
{
	this->paymentMethod = paymentMethod;
}
/*!
\return the customer 
*/
Customer * ShoppingCart::getCustomer()const
{
	return customer;
}
/*!
\param customer an Customer class.
*/
void ShoppingCart::setCustomer(Customer * customer)
{
	this->customer = customer;
}
void ShoppingCart::setBonusUsed()
{
	this->isBonusUsed = true;
}
/*!
\param product an Product class.
*/
void ShoppingCart::addProduct(Product * product)
{
	ProductToPurchase *temp = new ProductToPurchase;
	temp->setProduct(product);
	cout << "\tHow many : ";
	int quan;
	cin >> quan;
	while (quan <= 0)
	{
		cout << "\n\tInvalid entry. Please enter a positive number : ";
		cin >> quan;
	}
	temp->setQuantity(quan);
	productsToPurchase.push_back(temp);
	cout << "\tItem added!" << endl;
}
/*!
\param product an Product class.
*/
void ShoppingCart::removeProduct(Product* product)
{
	auto it = productsToPurchase.begin();
	while (it!=productsToPurchase.end()) {
		if ((*it)->getProduct() == product) {
			productsToPurchase.remove(*it);
			cout << "\tThe product has been removed" << endl;
			cout << "\t"; system("pause");
			return;
		}
		++it;
	}
	cout << "\tThe item that you wanted to remove is not in list!" << endl;
}
void ShoppingCart::placeOrder()
{
	double totalPrice = 0;
	for (auto it = productsToPurchase.begin(); it != productsToPurchase.end(); ++it) {
		totalPrice += (*it)->getProduct()->getPrice() * (*it)->getQuantity();
	}
	
	if (customer->getBonusFlag()) {
		totalPrice -= customer->getBonus();
		customer->setBonus(0);
	}
	int b;
	cout << "\tTotal price is : " << totalPrice << endl;
	cout << "\t+-------------------------------------+\n";
	cout << "\t|           Shopping Menu             |\n";
	cout << "\t+-------------------------------------+\n";
	cout << "\t|          1 - Cash                   |\n";
	cout << "\t|          2 - Credit Card            |\n";
	cout << "\t|          3 - Check                  |\n";
	cout << "\t+-------------------------------------+\n";
	cout << "\tChoose One : ";

	cin >> b;

	
	if (b == 1) {
		Cash *cash = new Cash(totalPrice);
		cash->performPayment();
	}
	else if (b == 2) {
		long number;
		string type, expdate;
		cout << "\tEnter the number : ";
		cin >> number;
		cout << "\tEnter the type : ";
		cin >> type;
		cout << "\tEnter the expdate : ";
		cin >> expdate;
		CreditCard *creditcard = new CreditCard(totalPrice, number, type, expdate);
		creditcard->performPayment();
	}
	else if (b == 3) {
		string name, bankid;
		cout << "\tEnter name : ";
		cin >> name;
		cout << "\tEnter the bankID : ";
		cin >> bankid;
		Check *check = new Check(totalPrice, name, bankid);
		check->performPayment();
	}
	
	customer->addBonus(totalPrice);
}

void ShoppingCart::cancelOrder()
{
	while (!productsToPurchase.empty())
		productsToPurchase.pop_back();
	cout << "\tOrder has been cancelled!" << endl;
	cout << "\t"; system("pause");
}

void ShoppingCart::printProduct()
{
	if (productsToPurchase.empty()) {
		cout << "\tYour shoppingcart is empty!" << endl;
	}
	else {
		list<ProductToPurchase*>::iterator i;

		for (i = productsToPurchase.begin(); i != productsToPurchase.end(); ++i)
		{
			cout << "\n\tQuantity of product is : " << (*i)->getQuantity() << endl;
			(*i)->getProduct()->printProperties();
			cout << endl << endl;
		}
	}
}
void ShoppingCart::showInvoice()
{
	customer->sendBill();
}
