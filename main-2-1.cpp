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
    Wagon w;
    w.addCapybara(names1);
    w.addCapybara(names2);
    w.printCapybaras();
    return 0;
}