#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::tryToEvade()
{
    setSpeed(0);
    std::cout << name << ": hello officer, what seems to be the problem?" << std::endl;
}

void SemiTruck::honkHorn()
{
    std::cout << "\n\nHOOOOOOOOONK!!!\n\n";
    setSpeed(56);
}
