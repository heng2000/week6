#include<iostream>
#include<string>
#include "Airplane.h"
#include "Person.h"
using namespace std;
Airplane::Airplane()
{
    thecallsign ="a";

}

Airplane::~Airplane()
{
}
Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot)
{
    thecallsign =callsign;
    pilot =thePilot;
    copilot =theCoPilot;

}
void Airplane:: setPilot(Person thePilot)
{
    pilot =thePilot;
}

Person Airplane:: getPilot()
{
    return pilot;
}

void Airplane::setCoPilot(Person theCoPilot)
{
    copilot =theCoPilot;
}
Person Airplane::getCoPilot()
{
    return copilot;
}

void Airplane::printDetails()
{
    cout<<thecallsign<<endl;
    cout<<pilot.getName()<<endl;
}