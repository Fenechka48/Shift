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
	cout << "�������� �������\n ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "������\n"; //����� ������� �� �����
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "������  � �������� �������\n"; //����� ������� �� �����
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
	cout << "����� ��������� �������:" << sum << endl;
	cout << "����� ������-�������������� ��������� �������: " << (double)sum/size << endl;
	// ����� ������������ � �������������
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