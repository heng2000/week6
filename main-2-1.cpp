#include<iostream>
#include "Wagon.h"
#include "Capybara.h"
using namespace std;
int main ()
{
    Capybara*pointer =new Capybara [4];
    string name1 ="1";
    pointer->setName(name1);
    cout << pointer->getName()<<endl;
    return 0;

}