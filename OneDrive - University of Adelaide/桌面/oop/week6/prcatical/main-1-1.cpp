#include<iostream>
#include<string>
using namespace std;
class Capybara
{
    public:
    string name;
    int age;
    void setname(string copyname)
    {
        name =copyname;
    }
    string getname()
    {
        return name;
    }
    void setage (int copyage)
    {
        age =copyage;
    }
    int getage()
    {
        return age;
    }
    Capybara(int copyage):age(copyage)
    {
        cout<<"created";
    }


};
int main ()
{
    Capybara animal;
    string name;
    int age;
    cin>>name;
    cin>>age;
    animal.setname(name);
    animal.setage(age);

    
    return 0;

}
