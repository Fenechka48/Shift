#include <iostream>;
using namespace std;
int Add(int a, int b);// прототип функции ( объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b); 
int Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);// использование функции (вызов функции - Function call)
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "  в степени " << b << "= " << Power(a, b) << endl;
}

int Add(int a, int b) //  реализация функции (Определение функции - Function defenition)
{
	// addition - сложение
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	//subtaction- разность
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

int Power(int a, int b)
{
	int temp = 1;
	for (int i = 1; i <= b; i++)
	{
		temp *= a;
	}
	return temp;
}
