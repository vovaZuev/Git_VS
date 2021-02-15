#include <iostream>
using namespace std;

void FillRand(int* arr, int n);
void PrintArray(int* arr, int n);
void PushBack(int* arr, int* n, int value);

int main()
{
	setlocale(LC_ALL, "");
	cout << "������ ���!" << endl;
	
	int n = 10;
	int* arr = new int[n];
	FillRand(arr, n);
	PushBack(arr, &n, 999);
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

void PushBack(int* arr, int* n, int value)
{
	int* temp = new int[*n + 1];
	for (int i = 0; i < *n; i++)
	{
		temp[i] = arr[i];
	}
	temp[*n] = value;
	delete[] arr;
	arr = temp;
}