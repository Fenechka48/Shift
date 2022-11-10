#include <iostream>
using namespace std;

void FillRand(int arr[], const int n,int minRand=0,int maxRand=100);
void Print(int arr[], const int n);
int Sum(int arr[], int n);
double  Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};
	int number_of_shifts;

	FillRand(arr, n);
	Print(arr, n);
	
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое значение  " << Avg(arr, n) << endl;

	cout << "Минимальное значение из массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(arr, n) << endl;
	
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n);
	Print(arr, n);
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


int minValueIn(int arr[], const int n)
{
	int minValueIn = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (minValueIn > arr[i])
			minValueIn = arr[i];
	}
	cout << endl;
	return minValueIn;
}
int maxValueIn(int arr[], const int n)
{
	int maxValueIn = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (maxValueIn < arr[i])
			maxValueIn = arr[i];
	}
	cout << endl;
	return maxValueIn;
}

int number_of_shifts;

void shiftLeft(int arr[], const int n)
{
	
	int number_of_shifts;
	for (int i = 0; i < number_of_shifts;i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}