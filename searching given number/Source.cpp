#include<iostream>
using namespace std;

int main() {
	int array[10], find, foundAt=-1;
	for (int i = 0; i < 10; i++) {
		cout << "array[" << i << "]=";
		cin >> array[i];
	}
	cout << "enter the number you want to find :";
	cin >> find;
	for (int i = 0; i < 10; i++){
		if (array[i]==find) {
			foundAt = i;
		}
	}
	if (foundAt==-1) {
		cout << find << " is not found" << endl;
	}
	else
		cout << find << " is found in " << foundAt;

	return 0;
}