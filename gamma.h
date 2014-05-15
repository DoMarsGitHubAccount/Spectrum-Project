//
//  gamma.h
//  SpectrumProject
//
//  Created by Donovan  on 5/13/14.
//  Copyright (c) 2014 Donovan . All rights reserved.
//

#ifndef __SpectrumProject__gamma__
#define __SpectrumProject__gamma__

#include <iostream>
using namespace std;

class gamma
{
private:
    string gammaWavelength;
    string gammaFrequency;
    string gammaNature;
    string gammaUse;
    
    
public:
    gamma()
    {
        gammaWavelength = "less than 0.01 nm";
        gammaFrequency = "more than 30 EHz";
        gammaNature = "Radioactive Decay";
        gammaUse = "Cancer Treatment";
    }
    
    string getWavelength() const;
    string getFrequency() const;
    string getNature() const;
    string getUse() const;
};

#endif /* defined(__SpectrumProject__gamma__) */
