#include "student.h"
using namespace std;
#include<string>
void student::setName(string firstName, string lastName)
{
    first = firstName;
    last = lastName;//hey
}

string student::fullName()
{
    string first;
    string last;
    string value;
    value = first.append(last);
    return value;
}

