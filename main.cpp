#include <iostream>
#include <iomanip>
#include "roster.h"
#include "student.h"
#include "degree.h"

using namespace std;

int main() {
        cout << "Scripting and Programming - Appliocations - C867" << endl;
        cout << "Programming Language: C++" << endl;
        cout << "WGU Student ID: " << endl;
        cout << "Programmer: Monica Em" << endl << endl;
        
        const string studentData[] = 
        {
                        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
                        "A2,Suzan,Erickson,Erickson_1990@gmail.com,19,50,30,40,NETWORK",
                        "A3,Jack,Napoli,The_lawyer99@yahoo.com,19,20,40,33,SOFTWARE",
                        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
                        "A5,Monica,Em,mem@wgu.edu,39,20,20,30,SOFTWARE"
        };
        
Roster classRoster;

for (int i = 0; i < numStudents; ++1) {
        classroster.ClassRosterParse(studentData[i]);
}

classRoster.PrintAll();

cout <<endl;

cout <<"List of invalid email addresses:" <<endl;
classRoster.PrintInvalidEmails();

cout << endl << "Average days in courses, per student:" endl;
for (int i = 0; i<NUM_STUDENTS; ++i) {
        classRoster.PrintAvgDaysInCourse(classRoster.classRosterArray[i]->Student::getStudentID());
}

classRoster.PrintByDegreeProgram(DegreeProgram::SOFTWARE);

classRoster.Remove("A3");
cout << endl;
classRoster.PrintAll();
cout<< endl;
classRoster.Remove(A3);
cout<< endl;

classRoster.~Roster();

return 0;
}
