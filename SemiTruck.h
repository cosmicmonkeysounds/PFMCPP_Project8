#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck( const std::string& n );
    ~SemiTruck() override;
    SemiTruck( const SemiTruck& );
    SemiTruck& operator =( const SemiTruck& );

    void tryToEvade() override;
    void honkHorn();
};

