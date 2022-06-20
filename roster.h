#include <string>
#include "student.h"
#include <vector>



class Roster{
public: 
    vector <Student> classRosterArray;
    
     
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeType degreetype);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeType degreetype);


};