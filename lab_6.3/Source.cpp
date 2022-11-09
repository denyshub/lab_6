#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;



void Create(int* a, const int size, const int min, const int max)
{
	for (int i = 0; i < size; i++)
		a[i] = min + rand() % (max - min + 1);
}

//template
template <typename T>
T Create1(T* a, const T size, const T min, const T max) {

	for (int i = 0; i < size; i++)
		a[i] = min + rand() % (max - min + 1);

	return *a;
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}




void Sort(int* a, const int size) {

	for (int i = 0;i < size;i++)
	{
		for (int j = i + 1;j < size; j++)
		{
			if (a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

//template
template <typename T>
T Sort1(T* a, T size) {

	for (int i = 0;i < size;i++)
	{
		for (int j = i + 1;j < size; j++)
		{
			if (a[i] < a[j])
			{
				T temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return *a;
}
int main()
{
	srand((unsigned)time(NULL));

	int n;
	cout << "Enter an number of elements: ";cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	int min = -100;
	int max = 100;

	Create(a, n, min, max);
	Print(a, n);
	Sort(a, n);
	Print(a, n);

	cout << endl;
	//template option
	int created = Create1(b, n, min, max);
	Print(b, n);
	int sorted = Sort1(b, n);
	Print(b, n);

	delete[]a;
	delete[]b;

	return 0;
}
