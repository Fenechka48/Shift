#include <iostream>;
#include <ctime>;
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	const int n = 10;
	int arr[n];
	
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < n;)
		{
			if (arr[j] == arr[i] && i != j)
			{
				arr[i] = rand() % (80 - 70) + 70;
				j++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{	
		cout << arr[i] << "\t";
	}
	cout << endl;
}