#include <iostream>
#include "Capybara.h"
using namespace std;
//定义构造函数
Capybara::Capybara()
{
    // name ="a";
    // age =12;
}

void Capybara::setName(string capyName)
{
    name =capyName;
}

string Capybara::getName()
{
    return name;
}

void Capybara::setAge(int capyAge)
{
    age =capyAge;
}

int Capybara::getAge()
{
    return age;
}
Capybara::~Capybara()
{

}

