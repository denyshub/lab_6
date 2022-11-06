#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void random(int *arr, int size, int i, int min, int max) {
	arr[i] = min + rand() % (max - min + 1);
	if (i < size - 1)
		random(arr, size, i + 1, min, max);
	else
		cout << endl;
}

void out_array(int *arr, const int size, int i) {
	cout << setw(4) << arr[i];
	if (i < size - 1)
		out_array(arr, size, i+1);
	else
		cout << endl;
}

int number_of(int* arr, const int size, int i, int n) {
	if (i < size - 1) {
		if (arr[i] > 0 && arr[i] % 2 == 0)
			++n;
			number_of(arr, size, i + 1, n );
	}
	else
		return n;

}

int sum_of(int* arr, const int size, int i, int sum) {
	if (i < size - 1) {
		if (arr[i] > 0 && arr[i] % 2 == 0) 
			sum += arr[i];
		
		sum_of(arr, size, i + 1, sum);
		
	}
	else
		return sum;

}

void zero(int* arr, const int size, int i) {
	if (i < size - 1) {
		if (arr[i] > 0 && arr[i] % 2 == 0)
			arr[i] = 0;

		zero(arr, size, i + 1);
	}
	else
		cout << endl;
	
}

int main() {
	srand((unsigned)time(NULL));
	int min = -20;
	int max = 30;

	const int n = 25;
	int a[n];

 //random
	random(a, n, 0, min, max);
	out_array(a, n, 0);

//number
	int number = number_of(a, n, 0, 0);
	cout << "\nNumber of elements: " << endl;
	cout << number << endl;
//sum
	int sum_of_elem = sum_of(a, n, 0, 0);
	cout << "\n Sum of elements: " << endl;
	cout << sum_of_elem << endl;
//changing
	zero(a, n, 0);
	out_array(a, n, 0);
	return 0;
}