#include <iostream>
using namespace std;
#define delimiter "\n-----------------------------------------------\n"
const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double brr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float crr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char drr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS,const int COLS);
void FillRand(double brr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float crr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char drr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double brr[], const int SIZE);
void Print(float crr[], const int c);
void Print(char drr[], const int d);
void Print(int arr[ROWS][COLS], const int ROWS,const int COLS);
void Print(double brr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float crr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char drr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], int n);
double Sum(double brr[], int SIZE);
float Sum(float crr[], int c);
char Sum(char drr[], int d);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double brr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float crr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char drr[ROWS][COLS], const int ROWS, const int COLS);

double  Avg(int arr[], const int n);
double  Avg(double brr[], const int SIZE);
float  Avg(float crr[], const int c);
char  Avg(char drr[], const int d);
int  Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double brr[ROWS][COLS], const int ROWS, const int COLS);
float Avg(float crr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char drr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double brr[], const int SIZE);
float minValueIn(float crr[], const int c);
char minValueIn(char drr[], const int d);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double brr[ROWS][COLS], const int ROWS, const int COLS);
float minValueIn(float crr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char drr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double brr[], const int SIZE);
float maxValueIn(float crr[], const int c);
char maxValueIn(char drr[], const int d);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double brr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float crr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char drr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double brr[], const int SIZE, int b_number_of_shifts);
void shiftRight(int arr[], int number_of_shifts_2);
void shiftRight(double brr[], const int SIZE, int b_number_of_shifts);
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
	int number_of_shifts, b_number_of_shifts; 
	int number_of_shifts_2,temp;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts_2;
	shiftRight(arr,number_of_shifts_2);
	Print(arr, n);
	cout << "Колличество повторений : ";
	Sort(arr, n);
	Print(arr, n);
	UniqueRand(arr, n);
	Print(arr, n);
	cout << delimiter << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое значение  " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(brr, SIZE) << endl;
	cout << "Введите количество сдвигов: "; cin >> b_number_of_shifts;
	shiftLeft(brr, SIZE,b_number_of_shifts);
	Print(brr, SIZE);
	shiftRight(brr, SIZE, b_number_of_shifts);
	Print(brr, SIZE);
	cout << delimiter << endl;
	//FillRand(arr, n);
	//Print(arr, n);
	//Search(arr, n);
	const int c = 10;
	double crr[c];
	FillRand(brr, c);
	Print(crr, c);
	/*cout << "Сумма элементов массива: " << Sum(crr, c) << endl;
	cout << "Среднее арифметическое значение  " << Avg(crr, c) << endl;
	cout << "Среднее арифметическое значение  " << Avg(crr, c) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(crr, c) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(crr, c) << endl;*/
	cout << delimiter << endl;
	const int d = 10;
	double drr[d];
	FillRand(drr, d);
	Print(drr, d);
	/* cout << "Сумма элементов массива: " << Sum(drr, d) << endl;
	cout << "Среднее арифметическое значение  " << Avg(drr, d) << endl;
	cout << "Среднее арифметическое значение  " << Avg(drr, d) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(drr, d) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(drr, d) << endl;*/
	cout << delimiter << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение  " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;
	double b_arr_2[ROWS][COLS];
	FillRand(b_arr_2, ROWS, COLS);
	Print(b_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(b_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение  " << Avg(b_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(b_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(b_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;
	float c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение  " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;
	float d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение  " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальноее значение из массива: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
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
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			brr[i][j] = rand() % 100;
		}
	}
}
void FillRand(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			crr[i][j] = rand() % 100;
		}
	}
}
void FillRand(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			drr[i][j] = rand() % 100;
		}
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
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << brr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << crr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << drr[i][j] << "\t";
		}
		cout << endl;
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
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << endl;
	return sum;
}
double Sum(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
		int sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				sum += brr[i][j];
			}
		}
		cout << endl;
		return sum;
}
float Sum(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += crr[i][j];
		}
	}
	cout << endl;
	return sum;
}
char Sum(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += drr[i][j];
		}
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
int  Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return (double)Sum(arr, ROWS, COLS) / COLS*ROWS;
		}
	}
	cout << endl;
}
double Avg(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return (double)Sum(brr, ROWS, COLS) / COLS * ROWS;
		}
	}
	cout << endl;
}
float Avg(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return (double)Sum(crr, ROWS, COLS) / COLS * ROWS;
		}
	}
	cout << endl;
}
char Avg(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return (double)Sum(drr, ROWS, COLS) / COLS * ROWS;
		}
	}
	cout << endl;
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
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValueIn = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (minValueIn > arr[i][j])
				minValueIn = arr[i][j];
		}
	}
	cout << endl;
	return minValueIn;
}
double minValueIn(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValueIn = brr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (minValueIn > brr[i][j])
				minValueIn = brr[i][j];
		}
	}
	cout << endl;
	return minValueIn;
}
float minValueIn(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValueIn = crr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (minValueIn > crr[i][j])
				minValueIn = crr[i][j];
		}
	}
	cout << endl;
	return minValueIn;
}
char minValueIn(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValueIn = drr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (minValueIn > drr[i][j])
				minValueIn = drr[i][j];
		}
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
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValueIn = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (maxValueIn < arr[i][j])
				maxValueIn = arr[i][j];
		}
	}
	cout << endl;
	return maxValueIn;
}
double maxValueIn(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValueIn = brr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (maxValueIn < brr[i][j])
				maxValueIn = brr[i][j];
		}
	}
	cout << endl;
	return maxValueIn;
}
float maxValueIn(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValueIn = crr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (maxValueIn < crr[i][j])
				maxValueIn = crr[i][j];
		}
	}
	cout << endl;
	return maxValueIn;
}
char maxValueIn(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValueIn = drr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (maxValueIn < drr[i][j])
				maxValueIn = drr[i][j];
		}
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
	cout << endl;
}
void shiftLeft(double brr[], const int SIZE, int b_number_of_shifts)
{
	for (int i = 0; i < b_number_of_shifts; i++)
		{
			int buffer = brr[0];
			for (int i = 0; i < SIZE; i++)
			{
				brr[i] = brr[i + 1];
			}
			brr[SIZE - 1] = buffer;
		}
	cout << endl;
}
void shiftRight(int arr[], int number_of_shifts_2)
{
	shiftRight(arr, n, n - number_of_shifts);
}
void shiftRight(double brr[], const int SIZE, int b_number_of_shifts)
{
	shiftRight(brr, SIZE, SIZE - b_number_of_shifts);
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
