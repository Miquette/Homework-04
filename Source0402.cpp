///////////////////////
// Miquette Orren
// CS 172 Ex04_02
// problem 11.3
//////////////////////

#include <iostream>
using namespace std;

int originalarraysize() // allows user to enter the size of an array
{
	int SIZE;
	cout << "How many numbers will you enter: " << endl;
	cin >> SIZE;
	return SIZE;
}

int* allocarray(int size)  // sets a pointer to each element in the array and sets the array elements equal to 0
{
	int* ptrfill = new int[size];
	for (int x = 0; x < size; x++)
	{
		ptrfill[x] = 0;
	}
	return ptrfill;
}

void inputnumbers(int* numbers, int size) // allows user to enter nums
{
	for (int* c = numbers; c < numbers + size; c++)
	{
		cout << "Enter numbers: " << endl;
		cin >> *c;
	}
}


int* doubleCapacity(const int* list, int size) // doubles size of the array and transfers original numbers to new array
{
	int dubs = 2 * size;
	int* ptrfil = new int[dubs];
	for (int x = 0; x < dubs; x++)
	{
		ptrfil[x] = 0;
	}

	for (int y = 0; y < size; y++)
	{
		ptrfil[y] = list[y];
	}
	return ptrfil;
}




int main()
{
	int originalsize;
	originalsize = originalarraysize();
	int* list = allocarray(originalsize);
	inputnumbers(list, originalsize);
	int* dubslist = doubleCapacity(list, originalsize);
	cout << dubslist << endl;
	return 0;
}