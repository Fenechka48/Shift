#include <iostream>;
#include <ctime>;

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	const int n = 10;
	int arr[n];
	bool value;
	for (int i = 0; i < n;)
	{
		value = false;
		int value = rand() % (80 - 70) + 70;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == value)
			{
				value = true;
				break;
			}
		}
		if (value != true)
		{
			arr[i] = value;
			i++;
		}
	}
	for (int i = 0; i < n; i++)
	{	
		cout << arr[i] << "\t";
	}
	cout << endl;
}