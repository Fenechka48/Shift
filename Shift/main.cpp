#include <iostream>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

#include <conio.h> 
#include <string>
//#define SHIFT_LEFT
//#define SHIFT_RIGHT

void main()
{
#ifdef SHIFT_LEFT
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	// ����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//���� ������ 
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
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
	// ����� ���������� �������
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // SHIFT_LEFT

#ifdef SHIFT_RIGHT
	setlocale(LC_ALL, "");
	const int size = 10;
	int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };
	// ���� ������ �������
	cout << "�������� ������: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//���� ������ ������
	int number_of_shift;
	cout << "������� ���������� �������: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[size - 1];
		for (int i = size - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
		cout << endl;
	}
	cout << endl;
	// ����� ���������� �������
	cout << "��������� ������: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // SHIFT_RIGHT

	setlocale (LC_ALL, "");
	int number,a,temp;
	const int SIZE=50;
	int arr[SIZE]={};
	cout << "������� ����� ��������� �����: "; cin >> number;
	//������ �������� � �������� �������
	temp = number;
	for (int i = 0; i < number; i++)
	{
	 if (temp >= 2)
	 {
		arr[i] = temp % 2;
		temp = temp / 2;
	 }
	cout << endl;
	}
	cout << endl;
	// ����� �������
	for (int i = 0; i < number; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	// ����� ����� � �������� ��
	cout << "����� � �������� ������� ���������: ";
	for (int i = number - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
	cout << endl;








	

}