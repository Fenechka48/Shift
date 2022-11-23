#include <iostream>;
using namespace std;
//#define RANDOM_MIN_MAX
//#define SORTING_ARRAY

void main()
{
	setlocale(LC_ALL, "");
#ifdef RANDOM_MIN_MAX
	const int n = 5;
	int arr[n];
	int MIN, MAX;
	cout << "Введите минимальное значение диапазона: "; cin >> MIN;
	cout << "Введите максимальное значение диапазона: "; cin >> MAX;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MIN || arr[i] < MAX)
		{
			cout << arr[i] << "\t";
		}

	}
	cout << endl;
#endif // RANDOM_MIN_MAX
	
#ifdef SORTING_ARRAY
	const int n = 100;
	int arr[n];
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << endl;
	cout << "Массив после сортировки: " << endl;
	for (int j = 0; j < n; j++)
	{
		cout << arr[j + 1] << "\t";
	}
	cout << endl;
#endif // SORTING_ARRAY





}