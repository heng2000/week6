#include<iostream>
#include "Wagon.h"
#include "Capybara.h"
using namespace std;
Wagon::Wagon()
{
    index = 0;
    animals = new Capybara [4];
}

Wagon::~Wagon()
{
}

bool Wagon:: addCapybara(Capybara newCapy)
{
    if(index >= 3) {
        return false;
    }else {

        animals[index] = newCapy;
        index++;

        return true;
    }


}
void Wagon:: emptyWagon()
{
    index  =0;
}
void Wagon:: printCapybaras()
{
    for (int i =0;i<index;i++)
    {
        cout<<animals[i].getName()<<" "<<animals[i].getAge()<<endl;
    }
}

