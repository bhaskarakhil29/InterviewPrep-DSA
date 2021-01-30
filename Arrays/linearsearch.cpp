#include<bits/stdc++.h>
using namespace std;
bool linear_search(int *arr, int search) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == search) return true;
	}
	return false;
}
int main()
{
	int arr[10], search;
	cout << "Enter the elements of the array : ";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << "Enter the element you want to search : ";
	cin >> search;

	if (linear_search(arr, search)) {
		cout << "The element you are searching for is found\n";
	}
	else {
		cout << "The element you are searching for is not found\n";
	}

}