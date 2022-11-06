#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void random( int *arr, int size, int min, int max) {
	for (int i = 0; i < size; i++) 
		arr[i] = min + rand() % (max - min + 1);

}

void out_arr(int* arr, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << arr[i];
	cout << endl;
}

int number_of(int* arr, const int size) {
	int num = 0;
	for (int i = 0; i <= size; i++) {
		if ( arr[i] % 2 != 0)
			num += 1;
	}

	return num;
}

int sum_elem(int* arr, const int size) {
	int sum = 0;
	for (int i = 0; i <= size; i++)
	{
		if ( arr[i] % 2 != 0)
			sum += arr[i];
	}
	return sum;
}

double arithmetic_mean(int sum, int num) {
	double average = sum *1. / num;
	return average;

}



int main() {
	srand((unsigned)time(NULL));
	int min = -100;
	int max = 100;

	const int n = 10;
	int a[n];

	random(a, n, min, max);

	out_arr(a, n);

	int sum = sum_elem(a, n);
	int num = number_of(a, n);
	double average = arithmetic_mean(sum, num);
	cout << "\nArithmetic mean: " << endl;
	cout << average << endl;

	return 0;
}