#include <iostream>;
using namespace std;
//#define RANDOM_MIN_MAX
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
	
	const int n = 50;
	int arr[n];
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
		temp = arr[i];
		arr[i+1] = temp;
		i++;
		if (arr[i+1]>arr[i])
		{
			cout << "отсортированный массив"<<arr[i + 1] << "\t";
			
		}

	}
	cout << endl;




}