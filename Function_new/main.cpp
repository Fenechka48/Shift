#include <iostream>
using namespace std;
#define delimiter "\n-----------------------------------------------\n"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, double minRand = 0, double maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

int Sum(int arr[], int n);
double  Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void Sort(int arr[], const int n);
void UniqueRand(int arr[], const int n);
void Search(int arr[], const int SIZE);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };


	FillRand(arr, n);
	Print(arr, n);

	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое значение  " << Avg(arr, n) << endl;

	cout << "Минимальное значение из массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(arr, n) << endl;
	//cout << "Колличество повторений : "
	Sort(arr, n);
	Print(arr, n);

	//int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	cout << delimiter << endl;
	const int SIZE = 8;
	double brr[SIZE];
	//FillRand(brr, SIZE);
	//Print(brr, SIZE);
	//cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	//cout << "Среднее арифметическое значение  " << Avg(brr, SIZE) << endl;
	//cout << "Минимальное значение из массива: " << minValueIn(brr, SIZE) << endl;
	//cout << "Максимальное значение из массива: " << maxValueIn(brr, SIZE) << endl;
	//UniqueRand(arr, n);
	//Print(arr, n);
	cout << delimiter << endl;
	FillRand(arr, n);
	Print(arr, n);
	Search(arr, n);
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
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
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
	return (double)Sum(arr, n) / n;
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


void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftRight(arr, n, n - number_of_shifts);
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	// заполненение случайными числами
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % int((maxRand - minRand) + minRand);
		arr[i] /= 100;
	}
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void UniqueRand(int arr[], const int n)
{
	bool value;
	for (int i = 0; i < n;)
	{
		value = false;
		int value = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == value)
			{
				value = true;
				break;
			}
		}
		if (value != true)
		{
			arr[i] = value;
			i++;
		}
	}
}
void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j] && i!= j)
			{
				cout << arr[i];
				break;
			}
		}
		cout << endl;
	}
}
