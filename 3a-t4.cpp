#include<iostream> 
using namespace std;

int main()
{
	int k, i = 1, sum_k = 0, number;
	cout << " Enter the amount of integers to sum = "; cin >> k;

	while ((k >= 1) && (i <= k)) {
		cout << "Enter integer nr. " << i << ": ";
		cin >> number;
		sum_k += number;
		i++;
		if (k == 0) {
			break;
		}
	}
	cout << " The total sum of " << k << " integers is: " << sum_k;

	return 0;
}
