//
//  microwave.h
//  SpectrumProject
//
//  Created by Donovan  on 5/13/14.
//  Copyright (c) 2014 Donovan . All rights reserved.
//

#ifndef __SpectrumProject__microwave__
#define __SpectrumProject__microwave__

#include <iostream>
using namespace std;

class microwave
{
private:
    string microFrequency;
    string microWavelength;
    string microNature;
    string microUse;

public:
    microwave()
    {
        microWavelength = "1 mm to 1 meter";
        microFrequency = "300 THz to 300 MHz";
        microNature = "Sun/ stars";
        microUse = "Microwaves";
    }
    
    string getWavelength() const;
    string getFrequency() const;
    string getNature() const;
    string getUse() const;
};

#endif /* defined(__SpectrumProject__microwave__) */



