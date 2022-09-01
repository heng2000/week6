#include<iostream>
#include "Airplane.h"
#include"Person.h"
using namespace std;

int main()
{
    Person name1 (1,"yu");
    Person name2 (2,"heng");
    Person name3 (3,"li");
    Airplane p ("nice",name1,name2);
    cout<<"details:"<<endl;
    p.printDetails();
    Person original = p.getPilot();
    p.setPilot(name3);
    p.setCoPilot(original);
    p.printDetails();
    return 0;

}