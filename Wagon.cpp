#include<iostream>
#include "Wagon.h"
#include "Capybara.h"
using namespace std;
Wagon::Wagon()
{
    index = 4;
    animals = new Capybara [4];
}


bool Wagon:: addCapybara(Capybara newCapy)
{
    int length_c =sizeof(newCapy)/sizeof(Capybara);
    // if(index >4)
    if (length_c>=index)
    {
        cout<<"error";
        return false;
    }else {
        // for (int i =0;i<index;i++)
        for (int i =0;i<length_c;i++)
        {
            animals[i] = newCapy;
        }
        // animals[index] = newCapy;
        // index++;
        index =length_c;

        return true;
    }


}
void Wagon:: emptyWagon()
{
    delete [] animals;
}
void Wagon:: printCapybaras()
{
    for (int i =0;i<index;i++)
    {
        cout<<animals[i].getName()<<" "<<animals[i].getAge()<<endl;
    }
}

