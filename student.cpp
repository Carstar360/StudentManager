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
    string value;
    value = first.append(" ");
    value = first.append(last);
    return value;
}

