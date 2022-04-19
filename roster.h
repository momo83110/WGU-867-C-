#ifndef roster_h
#define roster_h
#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
#include "degree.h"

using namespace std;


class Roster{
public: 
        Student** getClassRosterArray();
        string getStudentID(int index);
        void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,int daysInCourse2, int daysInCourse3, degree degreeprogram);
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        void printByDegreeProgram(degree degreeProgram);

        ~Roster();
        int classSize;
        int index;
private:
        Student* classRosterArray[5];
};
#endif