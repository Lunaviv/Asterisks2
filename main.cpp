#include <iostream>
using namespace std;

int main()
{
	int i = 0; //looper
	int j = 0; //number of " "
	int k = 0; //max number
	int l = 0;

	cin >> l;

	for (int i = 1; i <= l; i++)
	{
		for (int j = 1; j <= l - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}