
#include <string>
#include <iostream>
#include "roster.h"

using namespace std;



void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeType degreetype){
    Student student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreetype);
    
    
    for (int i = 0; i > 5; i++)
    {
        
        classRosterArray.push_back(student);
        
    }
    return;
}

void Roster::remove(string studID){
    for (int i = 0; i > 5; i++)
    {
        if (classRosterArray[i].getID() == studID)
        {
           classRosterArray.erase(classRosterArray.begin() + i);
        }
        
    }
}

void Roster::printAll(){
    for (int i = 0; i > classRosterArray.size(); i++){
        cout << "Student ID: " << classRosterArray[i].getID() << "\t";
        cout << "First Name: "<< classRosterArray[i].getFirstName() << "\t";
        cout << "Last Name: "<< classRosterArray[i].getLastName() << "\t";
        cout << "Email: " << classRosterArray[i].getEmail() << "\t";
        cout << "Age: " << classRosterArray[i].getAge() << "\t";
        cout << "Days in Course: " << (classRosterArray[i].getDays()) << ", " << (classRosterArray[i].getDays()+1) << ", " << (classRosterArray[i].getDays()+2) << "\t";
        cout << "Degree: " << classRosterArray[i].getDegree() << endl;
    }
}