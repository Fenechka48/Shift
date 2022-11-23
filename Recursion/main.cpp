#include <iostream>
using namespace std;

void elevator(int floor);
long int Fact(long int N);
long int Pow(long int Num, int stepen);
long int Fib(long int N);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Recursion" << endl;
	//int n;
	//cout << "Введите номер этажа: "; cin >> n;
	//elevator(n);
	long number;
	int Num, stepen;
	cout << "Введите число для вычисления факториала: "; cin >> number;
	long result = Fact(number);
	cout << "Факториал равен: " << result << "\n";
	cout << "Введите число: "; cin >> Num; 
	cout << "Введите степень "; cin >> stepen;
	long value = Pow(Num,stepen);
	cout << "Результат " << value << "\n";
	long int N;
    std:cout << "Введите количество членов для ряда Фибоначи: ";cin >> N;
	for (int i = 0; i <= N; i++)
	{
		cout << Fib(i) << "\t";
	}
	cout << endl;

	
}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже " << endl;
	elevator(floor-1);
	cout << "Вы на " << floor << " этаже " << endl;
}
long int Fact(long int N) 
{
	if (N == 1)
		return 1;
	else
		return N * Fact(N - 1) ;
	if (N < 1)
		return 0;
}


long int Pow(long int Num,int stepen)
{
	if (stepen == 0)
		return 1;
	else
		return Num * Pow(Num, stepen - 1);
}
long int Fib(long int N)
{
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;
	
	return  Fib(N - 2) + Fib(N - 1);
}





