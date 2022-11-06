#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void random(int* arr, const int size, int i, int min, int max) {
	arr[i] = min + rand() % (max - min + 1);
	
	if (i < size - 1)
		random(arr, size, i + 1, min, max);
	else	
		cout << endl;

}

void out_arr(int* arr, int size, int i) {
	cout << setw(4) << arr[i];
	if (i < size - 1)
		out_arr(arr, size, i + 1);
	else
		cout << endl;


}

int num_of(int* arr, int size, int i, int n) {
	if (i <= size - 1) {
		if (arr[i] % 2 != 0) {
			++n;
		}
		num_of(arr, size, i+1, n);
	}
	else
		return n;
}

int sum_of(int* arr, int size, int i, int sum) {
	if (i <= size - 1) {
		if (arr[i] % 2 != 0)
			sum += arr[i];
		sum_of(arr, size, i + 1, sum);

	}

	else
		return sum;


}

double a_m(double sum, int num) {
	double ariph_mean = sum / num;
	return ariph_mean;
}

int main() {
	srand((unsigned)time(NULL));
	int min = -100;
	int max = 100;

	const int n = 10;
	int a[n];

	random(a, n, 0, min, max);
	out_arr(a, n, 0);
	int num = num_of(a, n, 0, 0);
	int sum = sum_of(a, n, 0, 0);

	double number = a_m(sum, num);
	cout << "\nAriphmetic mean: " << endl;
	cout << number << endl;






	return 0;
}