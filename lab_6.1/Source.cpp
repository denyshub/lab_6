#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void random_elem(int* arr, const int size, const int min, const int max){
	for (int i = 0; i < size; i++) {
		arr[i] = min + rand() % (max - min + 1);
	}
}

void out_arr(int *arr, const int size){
	for (int i = 0; i < size; i++)
		cout << setw(4) << arr[i];
	cout << endl;




}

int number_of(int* arr, const int size) {
	int num = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0 && arr[i] % 2 == 0)
			num += 1;
	}

	return num;
}



int sum_elem(int *arr, const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0 && arr[i] % 2 == 0)
			sum += arr[i];
	}
	return sum;
}

int zero(int* arr, const int size ) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0 && arr[i] % 2 == 0)
			arr[i] = 0;
	}
	
	return *arr;
}





int main() {

	srand((unsigned)time(NULL));
	int min = -20;
	int max = 30;

	const int n = 25;
	int a[n];

	random_elem(a, n, min, max);//putting random elements into empty array
	out_arr(a, n); //printing filled with elements

	cout << endl;

	int num = number_of(a, n);//number of elements we require
	cout << "Number of elements: " << endl;
	cout << num << " ";

	cout << endl;

	int sum = sum_elem(a, n);//sum
	cout << "\nSum of elements: " << endl;
	cout << sum << endl; 

	int final = zero(a, n);//changing elements to zero
	cout << "\nFianl array: " << endl;
	out_arr(a, n);


	return 0;
}