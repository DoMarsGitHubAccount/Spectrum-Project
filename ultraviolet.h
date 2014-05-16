//
//  ultraviolet.h
//  SpectrumProject
//
//  Created by Donovan  on 5/13/14.
//  Copyright (c) 2014 Donovan . All rights reserved.
//

#ifndef __SpectrumProject__ultraviolet__
#define __SpectrumProject__ultraviolet__

#include <iostream>
using namespace std;

class ultraviolet
{
private:
    string uvWavelength;
    string uvFrequency;
    string uvNature;
    string uvUse;
    
public:
    ultraviolet()
    {
        uvWavelength = "10 nm to 380 nm";
        uvFrequency = "30 PHz to 790 THz";
        uvNature = "Sun";
        uvUse = "Killing bacteria";
    }
    
    string getWavelength() const;
    string getFrequency() const;
    string getNature() const;
    string getUse() const;
};

#endif /* defined(__SpectrumProject__ultraviolet__) */
