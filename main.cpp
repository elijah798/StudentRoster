#include <iostream>
#include "degree.h"
#include "student.h"
#include <string>
#include "roster.h"


using namespace std;

int main() {
    Roster rosterclass;
    rosterclass.add( "123232" , "Elijah", "Sellers", "sdfsdf", 12, 1, 2, 2, NETWORK);
    rosterclass.printAll();
}