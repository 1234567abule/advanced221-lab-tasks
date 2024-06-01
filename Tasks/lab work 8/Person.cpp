#include "Person.h"


Person::Person(const std::string& firstname, float newWeight)// Constructor with a float variable parameter
{
    newweight = newWeight;
    mfirstname = firstname;
    mage = 0;
}


Person::~Person()// Destructor
{

}


float Person::operator+(const Person& otherPerson)// Overloading the addition operator
{
    return newweight + otherPerson.newweight;
}

