#include <iostream>
using namespace std;

void FillRand(int* arr, int n);
void PrintArray(int* arr, int n);
void PushBack(int** arr, int* n, int value);

int main()
{
	setlocale(LC_ALL, "");
	cout << "Привет мир!" << endl;
	
	int n = 5;
	int* arr = new int[n];
	//0x100
	FillRand(arr, n);
	PrintArray(arr, n);
	PushBack(&arr, &n, 999);
	PrintArray(arr, n);

	delete[] arr;
}

void FillRand(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void PrintArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void PushBack(int** arr/*0x200*/, int* n, int value)
{
	int* temp = new int[*n + 1];
	for (int i = 0; i < *n; i++)
	{
		temp[i] = (*arr)[i];
	}
	temp[*n] = value;
	delete[] *arr;
	++*n;
	*arr = temp;
}