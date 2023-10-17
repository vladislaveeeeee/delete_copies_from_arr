#pragma once
#include <iostream>
using namespace std;
void Bubble_up(int a[], int size)  //bubblesort up
{
	for (int i = 0; i < size - 1; i++)     
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}

void Bubble_down(int a[], int size)  //bubblesort down
{
	for (int i = 0; i < size - 1; i++)     
	{
		for (int j = size - 1; j > i; j--)
		{
			if (a[j] > a[j - 1])
			{
				swap(a[j], a[j - 1]);
			}
		}
	}

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}

void rand_number(int a[], int size)
{
	for (int i = 0; i < size; i++) // rand number
	{
		a[i] = 1 + rand() % 50;
		cout << a[i] << " ";
	}
}

int AvarageNum(int arr[], int size, int sum)
{
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];

	}
	sum /= size;
	return sum;
}

// Провірка на введення лише числа + #include <limits>
void check_num(bool &validInput, int &num_items)
{
	validInput = false;
	while (!validInput) {
		cout << "\nEnter the number of items: ";
		if (cin >> num_items) {
			validInput = true;
		}
		else {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Not a number. Please try again." << std::endl;
		}
	}
}

// Ініціалізація двомірної динамічної матриці
void Print_dynamic_matrix()
{
	int size;

	cout << "Enter size = ";
	cin >> size;
	int** arr = new int* [size];
	for (int i = 0; i < size; i++)
		arr[i] = new int[size];

	
	srand(time(nullptr));

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout.width(3);
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	
	for (int i = 0; i < size; i++)
		delete[] arr[i];
	delete[] arr;
}

void delete_copies_arr(int a[], int size)
{
	for (int i = 0; i < size - 1; i++) {
		if (a[i] == a[i + 1]) {
			for (int j = i + 1; j < size - 1; j++) {
				a[j] = a[j + 1];
			}
			size--;
			i--;
		}
	}
}
