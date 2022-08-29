#include<iostream>
#include<string>
#include"Capybara.h"
#include<cstdio>
using namespace std;

int main ()
{
    Capybara a;
    printf("a is : ");
    a.getName();
    a.getAge();
    printf("\n");
    Capybara b;
    string name1;
    int age1 =0;
    printf("enter a string: ");
    cin>>name1;
    printf("enter a age: ");
    cin>>age1;
    b.setName(name1);
    b.setAge(age1);
    printf("b is ");
    b.getName();
    b.getAge();
    return 0;
}