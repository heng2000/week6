#include<iostream>
#include "Wagon.h"
//s#include "Capybara.h"
using namespace std;
int main ()
{
    // Capybara c1;
    // Capybara c2;
    // c1.setName("wei");
    // c1.setAge(1);
    // c2.setName("guang");
    // c2.setAge(2);
    // Wagon w;
    // w.addCapybara(c1);
    // w.addCapybara(c2);
    // w.printCapybaras();
    Capybara names1;
    names1.setName("chunhua");
    names1.setAge(100);
    Capybara names2;
    names2.setName("weihuang");
    names2.setAge(222);
    Capybara names3;
    names3.setName("www");
    names3.setAge(333);
    Capybara names4;
    names4.setName("qqq");
    names4.setAge(444);
    Capybara names5;
    names5.setName("eee");
    names5.setAge(555);
    Wagon w;
    if(!w.addCapybara(names1))
    {
        cout<<"oops cannot add capybara:"<<names1.getName()<<" of age "<<names1.getAge()<<endl;
    }
    if(!w.addCapybara(names2))
    {
        cout<<"oops cannot add capybara:"<<names2.getName()<<" of age "<<names2.getAge()<<endl;
    }
    if(!w.addCapybara(names3))
    {
        cout<<"oops cannot add capybara:"<<names3.getName()<<" of age "<<names3.getAge()<<endl;
    }
    if(!w.addCapybara(names4))
    {
        cout<<"oops cannot add capybara:"<<names4.getName()<<" of age "<<names4.getAge()<<endl;
    }
    if(!w.addCapybara(names5))
    {
        cout<<"oops cannot add capybara:"<<names5.getName()<<" of age "<<names5.getAge()<<endl;
    }

    w.printCapybaras();
    return 0;
}