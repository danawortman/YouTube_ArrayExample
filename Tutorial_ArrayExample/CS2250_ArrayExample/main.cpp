#include <iostream>
#include <string>

using namespace std;

const int NBR_CUSTOMERS = 10;

void PrintCustomers(string** customers)
{
	for (int i = 0; i <= NBR_CUSTOMERS; ++i)
	{
		if (customers[i] != NULL)
		{
			cout << "Welcome to South Park, " << *customers[i] << endl;
		}
	}
	cout << endl;
}

int main()
{
	string** customers = new string*[NBR_CUSTOMERS];

	customers[0] = new string("Kyle");
	customers[1] = new string("Stan");
	customers[2] = new string("Eric");
	customers[3] = new string("Kenny");
	customers[4] = new string("Butters");
	customers[5] = new string("Chef");
	customers[6] = new string("Bebe");
	customers[7] = new string("Token");
	customers[8] = new string("Wendy");
	customers[9] = new string("Craig");

	PrintCustomers(customers);

	delete customers[9];

	PrintCustomers(customers);

	char c;
	cin.get(c);

	return 0;
}