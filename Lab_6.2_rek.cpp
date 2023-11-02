// Lab_06.2.rek.cpp 

// Варіант 22

#include <iostream>
#include <cstdlib>

using namespace std;

const int SIZE = 15;

// Заповнення масива
void FullArr(int t[], const int size, int a, int b)
{
	if (size <= 0)
		return;

	t[size - 1] = a + rand() % (b - a + 1);
	FullArr(t, size - 1, a, b);
}

// Вивід масива
void PrintArr(int t[], const int size)
{
	if (size <= 0)
		return;

	PrintArr(t, size - 1);
	cout << t[size - 1] << " ";
}

// Сума парних елементів масива
int SumArr(int t[], const int size)
{
	if (size <= 0)
		return 0;

	int sum = SumArr(t, size - 1);
	if (t[size - 1] % 2 == 0)
	{
		sum += t[size - 1];
	}
	return sum;
}

int main() {
	int a = 0, b = 25;
	int arr[SIZE]{};

	FullArr(arr, SIZE, a, b);

	cout << "Array - [";
	PrintArr(arr, SIZE);
	cout << "]" << endl;

	int sumArr = SumArr(arr, SIZE);
	cout << "Sum item array = " << sumArr << endl;
}
