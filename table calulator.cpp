#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number, I will display its table : ";
	cin >> num;
	cout << "Table of " << num << " is...................." << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << num << " * " << i << " =" << num * i<<endl;
	}
	return 0;
}