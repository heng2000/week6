#ifndef PERSON_H
#define PERSON_H
#include<string>
class Person
{
public:
    std::string name;
    int salary;
    person(/* args */);
    Person(int mySalary, std::string myName);
    void setName(std::string myName); 
    std::string getName();
    void setSalary(int mySalary);
    int getSalary();
};
#endif