#include <iostream>;
using namespace std;
int Add(int a, int b);// �������� ������� ( ���������� ������� - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b); 

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a, b);// ������������� ������� (����� ������� - Function call)
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
}

int Add(int a, int b) //  ���������� ������� (����������� ������� - Function defenition)
{
	// addition - ��������
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	//subtaction- ��������
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
