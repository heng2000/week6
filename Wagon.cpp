#include<iostream>
#include "Wagon.h"
#include "Capybara.h"
using namespace std;
Wagon::Wagon()
{
    number =2;
    index = 0;
    animals = new Capybara [4];
}

Wagon::~Wagon()
{
}

bool Wagon:: addCapybara(Capybara newCapy)
{
    if(index == 3) {
        return false;
    }
    // int length =sizeof(newCapy)/sizeof(Capybara);
    // if (length ==number)
    // {
    //     return 1;
    // }else{
    //     return 0;
    // }
    animals[index] = newCapy;
    index++;

    return true;

}
void Wagon:: emptyWagon()
{
    delete[] animals;
}
void Wagon:: printCapybaras()
{
    for (int i =0;i<index;i++)
    {
        cout<<animals[i].getName<<animals[i].getAge()<<endl;
    }
}

