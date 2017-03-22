///////////////////////
//Miquette Orren
//CS 172
//EX04_01
//////////////////////

#include <iostream>
using namespace std;

int promptarraysize() //lets the user input how large they would like their array to be
{
	int SIZE;
	cout << "How many numbers would you like to enter?" << endl;
	cin >> SIZE;
	return SIZE;
}

int* alloc_array(int size) //allocates every spot in the array to zero
{
	int* ptrfill = new int[size];

	for (int x = 0; x < size; x++)
	{
		ptrfill[x] = 0;
	}
	return ptrfill;
}

int populate_numbers(int* numbers, int size) //This allows users to enter numbers into the array
{
	for (int* c = numbers; c < numbers + size; c++)
	{
		cout << "Enter a number: " << endl;
		cin >> *c;
	}

}

int countAverage(int* numbers, int size) //averaging the numbers given in the array
{
	int sum = 0;
	int average;
	for (int* i = numbers; i < numbers + size; i++)
	{
		sum += *i;
	}
	average = sum / size;
	return average;
}

int aboveaverage(int* averaged, int* numbers, int size) //showing the user what numbers they entered are above average
{
	int howmany = 0;
	for (int* y = numbers; y < numbers + size; y++)
	{
		if (averaged < y)
		{
			howmany++;
		}
	}
	return howmany;
}

int main()
{
	int nums;
	nums = promptarraysize();

	int* numbers = alloc_array(nums);

	populate_numbers(numbers, nums);
	cout << "You gave me a few numbers and their average is " << countAverage(numbers, nums) << "." << endl;
	int* countAverage(numbers, nums);//There is a problem here, not sure what
	cout << "Out of the numbers you entered, " << aboveaverage(countAverage, numbers, nums) << " were above the average." << endl;

	delete[] numbers;

	return 0;
}