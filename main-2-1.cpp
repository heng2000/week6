#include<iostream>
#include "Wagon.h"
#include "Capybara.h"
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
    Capybara names;
    names.setName("a");
    Wagon w;
    w.addCapybara(names);
    w.printCapybaras();
    return 0;
}