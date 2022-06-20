#include <iostream>
#include <string>
#include "student.h"


using namespace std;




Student::Student(
    string studentID,
    string First_Name,
    string Last_Name,
    string Email,
    int age,
    int d1,
    int d2,
    int d3,
    DegreeType degree) {

        //initialize variables
        this -> studentID = studentID;
        this -> First_Name = First_Name;
        this -> Last_Name = Last_Name;
        this -> Email = Email;
        this -> Age = age;
        this -> Days[0] = d1;
        this -> Days[1] = d2;
        this -> Days[2] = d3;
        this -> degree = degree;

        }

    
        //setters


    void Student::setID(string id){
        studentID = id;
    }

    void Student::setFirstName(string first){
        First_Name = first;
    }

    void Student::setLastName(string last){
        Last_Name = last;
    }
    
    void Student::setEmail(string email){
        Email = email;
    }

    void Student::SetAge(int age){
        age = age;
    }

    void Student::setDays(int d1, int d2, int d3) {
        Days[0] = d1;
        Days[1] = d2;
        Days[2] = d3;
    }

    void Student::setDegree( DegreeType Degree){
        degree = Degree;
    }

    //getters

    string Student::getID(){
        return studentID;
    }

    string Student::getFirstName(){
        return First_Name;
    }

    string Student::getLastName(){
        return Last_Name;
    }

    string Student::getEmail(){
        return Email;
    }

    int Student::getAge(){
        return Age;
    }

    int Student::getDays(){
        return *Days;
    }

    DegreeType Student::getDegree(){
        return degree;
    }


    //print

    void Student::print(){
        cout << "Student ID: " << studentID << "\t";
        cout << "First Name: "<< First_Name << "\t";
        cout << "Last Name: "<< Last_Name << "\t";
        cout << "Email: " << Email << "\t";
        cout << "Age: " << Age << "\t";
        cout << "Days in Course: " << Days[0] << ", " << Days[1] << ", " << Days[2] << "\t";
        cout << "Degree: " << degree;
    }

