#include <iostream>
using namespace std;

void FillRand(int arr[], const int n,int minRand=0,int maxRand=100);
void Print(int arr[], const int n);
int Sum(int arr[], int n);
double  Avg(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое значение  " << Avg(arr, n) << endl;
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	// заполненение случайными числами
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)+minRand;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i< n; i++)
	{
		cout << arr[i] << "\t";
	}
}
int Sum(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << endl;
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double) Sum(arr, n) / n;
}
