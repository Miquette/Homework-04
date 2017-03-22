/////////////////////////
// Miquette Orren
// CS 172 EX04_03
// problem 11.5
////////////////////////

#include <iostream>
using namespace std;


//int* allocarray(int size)  // sets a pointer to each element in the array and sets the array elements equal to 0
//{
//	int* ptrfill = new int[size];
//	for (int x = 0; x < size; x++)
//	{
//		ptrfill[x] = 0;
//	}
//	return ptrfill;
//}

//void inputnumbers(int* numbers, int size) // allows user to enter nums
//{
//	for (int* c = numbers; c < numbers + size; c++)
//	{
//		cout << "Enter numbers: " << endl;
//		cin >> *c;
//	}
//}

int* smallestelement(int* numbers, int size)
{
	int* smallest = numbers[0];
	for (int* x = numbers; x < numbers + size; x++)
	{
		if (x < smallest)
		{
			smallest = x;
		}
	}
	return smallest;
}




int main()
{
	const int size = 8;
	int* list = new int[size] {1, 2, 4, 5, 10, 100, 2, -22};
	smallestelement(list, size);
	
	
	return 0;
}