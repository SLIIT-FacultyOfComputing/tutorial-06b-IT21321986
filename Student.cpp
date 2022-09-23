#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

/*Assign studentIdand name*/
void Student::assignDetails(int id, const char s_name[]) {
	studentID = id;
	strcpy_s(name, s_name);
}

// Display StudentId and Name
void Student::display() {
	cout << "Student ID : " << studentID << endl;
	cout << "Student Name : " << name << endl;
}