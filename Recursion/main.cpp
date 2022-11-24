#include <iostream>
using namespace std;

void elevator(int floor);
long int Fact(long int N);
double Pow(double Num, int stepen);
void Fib(int n, int a=1, int b=1);
void Fib2(int n, int i = 0, long long int a = 0, long long int b = 1);

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
	double value = Pow(Num,stepen);
	cout << "Результат " << value << "\n";
	long int N,n;
    std:cout << "Введите количество членов для ряда Фибоначи: ";cin >> n;
	Fib(n);
	//for (int i = 0; i < N; i++)
	//{
	//	cout << Fib(i) << "\t";
	//}
	//cout << endl;
	
	cout << "Введите предел для ряда Фибоначи: "; cin >> n;
	Fib2(n);
	
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
	//if (N == 1)
	//	return 1;
	//else
	//	return N * Fact(N - 1) ;
	//if (N < 1)
	//	return 0;
	return  N== 0 ? 1 : N * Fact(N - 1);
}


double Pow(double Num,int stepen)
{
	//if (stepen == 0)
	//	return 1;
	//else if (stepen<0) return 1/Num*Pow(Num,n+1);
	//else return Num * Pow(Num, stepen - 1);
	return stepen==0 ? 1 : stepen>0 ? Num * Pow(Num, stepen - 1) : 1/Num* Pow(Num, stepen+1);
}

long int Fib(long int N)
{
	//if (N == 0)
	//	return 0;
	//if (N == 1)
	//	return 1;
	//return  Fib(N - 2) + Fib(N - 1);
	return N == 0 || N==1 ? 1 : Fib(N - 2) + Fib(N - 1);
}
void Fib(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	Fib(n, b, a + b);
}
void Fib2(int n,int i, long long int a, long long int b)
{
	if (i>n) return;
	cout <<i <<"\t"<< a << "\n";
	Fib2(n,i+1, b, a + b);
}





