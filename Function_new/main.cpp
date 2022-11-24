#include <iostream>
using namespace std;
#define delimiter "\n-----------------------------------------------\n"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double brr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float crr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char drr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double brr[], const int SIZE);
void Print(float crr[], const int c);
void Print(char drr[], const int d);


int Sum(int arr[], int n);
double Sum(double brr[], int SIZE);
float Sum(float crr[], int c);
char Sum(char drr[], int d);

double  Avg(int arr[], const int n);
double  Avg(double brr[], const int SIZE);
float  Avg(float crr[], const int c);
char  Avg(char drr[], const int d);

int minValueIn(int arr[], const int n);
double minValueIn(double brr[], const int SIZE);
float minValueIn(float crr[], const int c);
char minValueIn(char drr[], const int d);

int maxValueIn(int arr[], const int n);
double maxValueIn(double brr[], const int SIZE);
float maxValueIn(float crr[], const int c);
char maxValueIn(char drr[], const int d);

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
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое значение  " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(brr, SIZE) << endl;
	//UniqueRand(arr, n);
	//Print(arr, n);
	cout << delimiter << endl;
	//FillRand(arr, n);
	//Print(arr, n);
	//Search(arr, n);
	const int c = 10;
	double crr[c];
	FillRand(brr, c);
	Print(crr, c);
	cout << "Сумма элементов массива: " << Sum(crr, c) << endl;
	cout << "Среднее арифметическое значение  " << Avg(crr, c) << endl;
	cout << "Среднее арифметическое значение  " << Avg(crr, c) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(crr, c) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(crr, c) << endl;
	cout << delimiter << endl;
	const int d = 10;
	double drr[d];
	FillRand(drr, d);
	Print(drr, d);
	cout << "Сумма элементов массива: " << Sum(drr, d) << endl;
	cout << "Среднее арифметическое значение  " << Avg(drr, d) << endl;
	cout << "Среднее арифметическое значение  " << Avg(drr, d) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(drr, d) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(drr, d) << endl;
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
void FillRand(double brr[], const int SIZE, int minRand, int maxRand )
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < SIZE; i++)
	{
		brr[i] = rand()%(maxRand - minRand) + minRand;
	}
}
void FillRand(float crr[], const int c, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < c; i++)
	{
		crr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(char drr[], const int d, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < d; i++)
	{
		drr[i] = rand() % (maxRand - minRand) + minRand;
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
void Print(double brr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;
}
void Print(float crr[], const int c)
{
	for (int i = 0; i < c; i++)
	{
		cout << crr[i] << "\t";
	}
	cout << endl;
}
void Print(char drr[], const int d)
{
	for (int i = 0; i < d; i++)
	{
		cout << drr[i] << "\t";
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
double Sum(double brr[], int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += brr[i];
	}
	cout << endl;
	return sum;
}
float Sum(float crr[], int c)
{
	int sum = 0;
	for (int i = 0; i < c; i++)
	{
		sum += crr[i];
	}
	cout << endl;
	return sum;
}
char Sum(char drr[], int d)
{
	int sum = 0;
	for (int i = 0; i < d; i++)
	{
		sum += drr[i];
	}
	cout << endl;
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double brr[], const int SIZE)
{
	return (double)Sum(brr, SIZE) / SIZE;
}
float Avg(float crr[], const int c)
{
	return (double)Sum(crr, c) / c;
}
char Avg(char drr[], const int d)
{
	return (double)Sum(drr, d) / d;
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
double minValueIn(double brr[], const int n)
{
	int minValueIn = brr[0];
	for (int i = 0; i < n; i++)
	{
		if (minValueIn > brr[i])
			minValueIn = brr[i];
	}
	cout << endl;
	return minValueIn;
}
float minValueIn(float crr[], const int c)
{
	int minValueIn = crr[0];
	for (int i = 0; i < c; i++)
	{
		if (minValueIn > crr[i])
			minValueIn = crr[i];
	}
	cout << endl;
	return minValueIn;
}
char minValueIn(char drr[], const int d)
{
	int minValueIn = drr[0];
	for (int i = 0; i < d; i++)
	{
		if (minValueIn > drr[i])
			minValueIn = drr[i];
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
double maxValueIn(double brr[], const int SIZE)
{
	int maxValueIn = brr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (maxValueIn < brr[i])
			maxValueIn = brr[i];
	}
	cout << endl;
	return maxValueIn;
}
float maxValueIn(float crr[], const int c)
{
	int maxValueIn = crr[0];
	for (int i = 0; i < c; i++)
	{
		if (maxValueIn < crr[i])
			maxValueIn = crr[i];
	}
	cout << endl;
	return maxValueIn;
}
char maxValueIn(char drr[], const int d)
{
	int maxValueIn = drr[0];
	for (int i = 0; i < d; i++)
	{
		if (maxValueIn < drr[i])
			maxValueIn = drr[i];
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
