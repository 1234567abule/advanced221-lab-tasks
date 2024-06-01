#pragma once 

#include <string>

class Person{
public :
Person(const std::string& firstname, float newWeight);

~Person();

float operator + (const Person& otherPerson);//we are overloading the add operator

private:
float newweight;
std::string mfirstname;
int mage;
};