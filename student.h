#ifndef student_h
#define student_h
#pragma once
#include "roster.h"
#include "degree.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <array>
using std::string; 

class Student {
public:
        Student();
        Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays[], degree degree);

void setStudentID(string studentID);
void setFirstName(string firstName);
void setLastName(string lastName);
void setEmailAddress(string emailAddress);
void setAge(int age);
void setNumDays(int numDays[]);
void setDegreeProgram(degree degree);

string getStudentID() const;
string getFirstName() const;
string getLastName() const;
string getEmailAddress() const;
int getAge() const;
int* getNumDays()const;
degree getDegree();
virtual void Print();

const int Days_Size = 3;

~Student();

private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int* numDays;
        degree degree;
};

#endif 