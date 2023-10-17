#include <iostream>
#include <time.h>


using namespace std;

void check_num(int& num_items)
{
	bool validInput = false;
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

void rand_number(int a[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		a[i] = 1 + rand() % 20;
		cout << a[i] << " ";
	}
}

void Bubble_down_cpp(int a[], int size)  //bubblesort down
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
}

void print_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void delete_copies_from_arr(int arr[], int size)
{
	bool temp = false;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		temp = false;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				temp = true;
			}
			else
			{
				temp = false;
			}

			if (temp == true)
			{
				arr[j - 1] = -1;
				count++;
			}

		}
	}
	
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j] > arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
	
	size -= count;

	cout << "\narr delete = ";
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int size;
	do
	{
		cout << "Enter the number of items: ";
		cin >> size;
		check_num(size);
	} while (size > 400);
	
	int* arr = new int [size];

	cout << "\narr = ";
	rand_number(arr, size);

	cout << "\narr sort = ";
	Bubble_down_cpp(arr, size);
	print_arr(arr, size);
	
	delete_copies_from_arr(arr, size);
}


