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
	//cout << "������� ����� �����: "; cin >> n;
	//elevator(n);
	long number;
	int Num, stepen;
	cout << "������� ����� ��� ���������� ����������: "; cin >> number;
	long result = Fact(number);
	cout << "��������� �����: " << result << "\n";
	cout << "������� �����: "; cin >> Num; 
	cout << "������� ������� "; cin >> stepen;
	long value = Pow(Num,stepen);
	cout << "��������� " << value << "\n";
	const int N;
	cout << "������� ������ ��� ���� ��������: "; cin >> N;


	
}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " ����� " << endl;
	elevator(floor-1);
	cout << "�� �� " << floor << " ����� " << endl;
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

// in work
long int Pow(long int Num,int stepen)
{
	if (stepen == 0)
		return 1;
	else
		return Num * Pow(Num, stepen - 1);
}
long int Fib(long int N)
{
	return  Fib(N - 2) + Fib(N - 1);
}
