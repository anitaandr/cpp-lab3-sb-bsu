#include<iostream> 
#include <limits>
using namespace std;

int main()
{
	int k, i = 1, sum_k = 0, number;
	cout << " Enter the amount of integers to sum = "; cin >> k;
	while ((k >= 1) && (i <= k) && (true)) {
		cout << "Enter integer nr. " << i << ": ";
		cin >> number;
		sum_k += number;
		i++;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Wrong input!Enter integer again: ";
			cin >> number;
		}
	}
	cout << " The total sum of " << k << " integers is: " << sum_k;

	return 0;
}
