#include <iostream>
#include <iomanip>
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;


Student::Student(string id, string firstName, string lastName, string emailAddress, int age, int days[3], string degree) {
    setStudentID(id);
    setFirstName(firstName);
    setLastName(lastName);
    setEmailAddress(emailAddress);
    setAge(age);
    setNumDays(days);
    setDegreeProgram(degree);
}

Student::~Student() {};


void Student::setStudentID(string id) {
    studentID = id;
};
void Student::setFirstName(string firstName){
    firstName = firstName;
};
void Student::setLastName(string lastName) {
    lastName = lastName;
};
void Student::setEmailAddress(string emailAddress) {
    emailAddress = emailAddress;
};
void Student::setAge(int age) {
    age = age;
};
void Student::setNumDays(int *days) {
    for (int i = 0; i < 3; i++) {
        numDays[i] = days[i];
}

string Student::getStudentID() {
        return studentID;
}

string Student::getFirstName(){
    return firstName;
}

string Student::getLastName(){
    return lastName;
}
string Student::getEmailAddress() {
    return emailAdress;
}

int Student::getAge() {
    return age;
}

int Student::getDaysToComp1() {
    return daysToComp[0]; 
}

int Student::getDaysToComp2() {
    return daysToComp[1]; 
}

int Student::getDaysToComp3() {
    return daysToComp[2]; 
}

degree Student::getDegreeProgram() {
    return degreeProgram;
}

void Student::printID() {
    cout << studentID;
    return;
}

void Student::printFirstName() {
    cout << firstName << endl;
    return;
}

void Student::lasttName() {
    cout << lastName << endl;
    return;
}

void Student::printEmailAddress() {
    cout << emailAddress << endl;
    return;
}

void Student::printAge() {
    cout << age << endl;
    return;
}

void Student::printDaysToComp() {
    cout << daysToComp[0] << endl;cout << daysToComp[1] << endl;cout << daysToComp[2] << endl;cout << daysToComp[3] << endl;
    return;
}

void Student::printDegreeProgress() {
    string degreeString;
    if (degreeProgress == "Security") {
            degreeString == "Security";
    }
    else if (degreeProgress == "Network") {
            degreeString == "Network";
    }
    else if (degreeProgress == "Software") {
            degreeString == "Software";
    }
    else {
        degreeString = "Error";
    }
    cout << degreeString << endl;
    return;
}

void Student::printAllStudentInfo() {
  string degreeString;
    if (degreeProgress == "Security") {
            degreeString == "Security";
    }
    else if (degreeProgress == "Network") {
            degreeString == "Network";
    }
    else if (degreeProgress == "Software") {
            degreeString == "Software";
    }
    else {
        degreeString = "Error";
    }
    cout << studentID << " First Name: " << firstName << " Last Name: " << lastName << " Age: " << age << " daysInCourse: { " << daysToComp[0] << ", " << daysToComp[1]", " << daysToComp[2] << "} Degree Program: " <<degreeString << "." << endl;


    return; 
}