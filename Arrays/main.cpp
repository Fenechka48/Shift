#include <iostream>
using namespace std;
//#define SINTACSIS
#define HOME_WORK



int main()
{
	setlocale(LC_ALL, "");
#ifdef SINTACSIS
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	arr[3] = 123;
	cout << arr[3] << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // SINTACSIS
	

	const int size = 5;
	int arr[size];
	cout << "Элементы массива\n ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "Массив\n"; //вывод массива на экран
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Массив  в обратном порядке\n"; //вывод массива на экран
	for (int i = size-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива:" << sum << endl;
	cout << "Сумма средне-арифметическое элементов массива: " << (double)sum/size << endl;
	// поиск минимального и максимального
	int min, max;
	min = max = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Max = " << max << "\t";
	cout << "Min = " << min << "\t";


}