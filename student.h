#pragma once
#include <string>
#include "degree.h"


using namespace std;
class Student
{
private:
    /* data */
    string studentID;
    string First_Name;
    string Last_Name;
    string Email;
    int Age;
    int Days[3];
    DegreeType degree;


public:
    Student(string studentID, string fName, string lName, string email, int age, int d1, int d2, int d3, DegreeType degreeType);
    Student();
   
    //setter methods
    void setID(string i);
    void setFirstName(string f);
    void setLastName(string l);
    void setEmail(string e);
    void SetAge(int a);
    void setDays(int d1, int d2,int d3);
    void setDegree(DegreeType d);

    //Getter Methods

    string getID();

    string getFirstName();

    string getLastName();

    string getEmail();

    int getAge();

    int getDays();

    DegreeType getDegree();

   
    ~Student() {

    }
    //print
    void print();
   
};

