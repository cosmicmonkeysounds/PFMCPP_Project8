#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck( const SemiTruck& ) = default;
SemiTruck& SemiTruck::operator =( const SemiTruck& ) = default;

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": hello officer, what seems to be the problem?" << std::endl;
}

void SemiTruck::honkHorn()
{
    std::cout << "\n" << name << ": HOOOOOOOOONK!!!";
    setSpeed(56);
}
