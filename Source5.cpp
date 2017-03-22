#include <iostream>
#include "HeaderCourse.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;

	if (numberOfStudents > capacity)
	{
		string* dubs = new string[numberOfStudents * 2];
		for (int x = 0; x < (numberOfStudents * 2); x++)
		{
			dubs[x] = "";
		}
		for (int y = 0; y < numberOfStudents; y++)
		{
			dubs[y] = students[y];
		}
	}
}

void Course::dropStudent(const string& name)
{
	students[numberOfStudents] = "";
	numberOfStudents--;
}

void Course::clear(const string& name) 
{
	for (int z = 0; z < numberOfStudents; z++)
	{
		students[z] = "";
	}
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

Course::Course(const Course& course) //problems here, not sure what, destructor and copy constructor
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
}