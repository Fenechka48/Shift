#include <iostream>;
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int MIN, MAX;
	cout << "������� ����������� �������� ���������: "; cin >> MIN;
	cout << "������� ������������ �������� ���������: "; cin >> MAX;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MIN || arr[i] < MAX)
		{
			cout << arr[i] << "\t";
		}

	}
	cout << endl;






}