#include "Car.h"

#include <iostream>

Car::Car(const std::string& n) : Vehicle(n) {}

void Car::closeWindows()
{
    setSpeed(70);
    std::cout << name << ": closing the windows!" << std::endl;
}

void Car::tryToEvade()
{
    std::cout << name << ": you'll never take me alive, ya dirty coppers!" << std::endl;
    setSpeed(100);
}
