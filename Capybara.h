#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <string>
using namespace std;

class Capybara
{
    public:
        string name;
        int age;
        Capybara();//构造
        void setName(string capyName);
        string getName();
        void setAge(int capyAge);
        int getAge();
        ~Capybara();
};
#endif