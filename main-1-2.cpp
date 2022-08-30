#include <iostream>
#include "Person.h"
using namespace std;
int main ()
{
    Person myself;
    printf("enter your name: ");
    string name1;
    cin>>name1;
    myself.setName(name1);
    myself.getName();
    return 0;
}