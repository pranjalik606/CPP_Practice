#include<iostream>

using namespace std;

int main()
{
	int var1,var2;
	int temp;

	cout << "Enter two num:" << endl;
	cin >> var1 >> var2;

	cout << "Before swapping" << endl << "var1:" << var1 << "\t" << "var2:" << var2 << endl;
	

	temp = var1;
	var1 = var2;
	var2 = temp;
 
	cout << "after swapping" << endl << "var1:" << var1 << "\t" << "var2:" << var2 << endl;

	return 0;

}
