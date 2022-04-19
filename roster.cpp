#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include "degree.h"
#include "student.h"
#include "roster.h"
#include <sstream>

const string studentData[] = 
{
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmail.com,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99@yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Monica,Em,mem@wgu.edu,39,20,20,30,SOFTWARE"
 };

Student** Roster::getClassRosterArray() {
	return this->classRosterArray;
}
        int* days = new int[3];

	days[0] = daysInCourse1;
	days[1] = daysInCourse2;
	days[2] = daysInCourse3;

	if (degreeProgram == SECURITY) {
		classRosterArray[nextEmptySlot] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, days, degreeProgram);
		nextEmptySlot++;
	}
	else if (degreeProgram == NETWORK) {
		classRosterArray[nextEmptySlot] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, days, degreeProgram);
		nextEmptySlot++;
	}
	else if (degreeProgram == SOFTWARE) {
		classRosterArray[nextEmptySlot] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, days, degreeProgram);
		nextEmptySlot++;
	}
	
	else {

	}
}

void Roster::remove(string id) {

    bool foundStudent = false;
    for (int i = 0; i < classSize; ++i) {
            if (classRosterArray[i] == nullptr) {
                    continue;
            }
            else if (id == classRosterArray[i]->getID()) {
                    classRosterArray[i] = nullptr;
                    foundStudent = true;
                    break;
            }
    }
    if (foundStudent == false) {
                cout << "Error: Student" << id << "Not Found." << endl;
    }
    else if (foundStudent == true) {
                cout << "Student" << id << "Removed." << endl;
    }
    return;
}

void Roster::printAll() {
        cout << "All current students:" << endl;
        for (int i = 0; i < classSize; ++i) {
                if (classRosterArray[i] == nullptr)
                {
                        continue;
                }
                else {
                        classRosterArray[i]->printAllStudentInfo();
                }
        }
        cout << endl;
        return;
}

void Roster::printAvgDaysInCourse(string ID) {
        for (int i = 0; i < classSize; ++i) {
                if (ID == classRosterArray[i]->getID()) {
                        int temparray[3] = {classRosterArray[i]->getNumDays()
                        double averageDays = (static_cast,<double>(temparray[0] + static_cast,<double>(temparray[1] + static_cast,<double>(temparray[2]()};
                        cout << id >> " 's Days in Their Courses:" << averageDays << endl;

            
                }
        }
} 

void Roster::printInvalidEmails() {
        for (int i = 0; i < classSize; ++i) {
                bool foundAt = false;
                bool foundPeriod = false;
                bool foundSpace = false;
                string email = "";
                email = classRosterArray[i]->Student::getEmailAddress();
                for (char charIndex: email) {
                    if (charIndex == '@') {
                            foundAt = true;

                    }
                    if (charIndex == '.') {
                            foundPeriod = true;
                    }
                    if (charIndex == ' ') {
                            foundSpace = true;
                    }
                }
                if (foundAt == false || foundPeriod == false || foundSpace == true) {
                    std::cout << classRosterArray[i]->Student::getEmailAddress() << std::endl;
                }
        }
}

void Roster::printByDegreeProgram(degree degree) {
        std::cout << std::endl << "Printing by degree..." << std::endl;
        for (int i = 0; i < classSize; ++i) {
                if (classRosterArray[i] != nullptr) {
                        if (degree == classRosterArray[i]->Student::getDegree()) {
                                classRosterArray{i}->Student::Print();
                        }
                }
        }
        return;
}

Roster::~Roster() {

        return;
}