//
//  xrays.h
//  SpectrumProject
//
//  Created by Donovan  on 5/13/14.
//  Copyright (c) 2014 Donovan . All rights reserved.
//

#ifndef __SpectrumProject__xrays__
#define __SpectrumProject__xrays__

#include <iostream>
using namespace std;

class xrays
{
private:
    string xraysWavelength;
    string xraysFrequency;
    string xraysNature;
    string xraysUse;
    
public:
    xrays()
    {
        xraysWavelength = "0.01 nm to 10 nm";
        xraysFrequency = "30 EHz to 30 PHz";
        xraysNature = "Cosmic Radiation";
        xraysUse = "Airport Security";
    }
    
    string getWavelength() const;
    string getFrequency() const;
    string getNature() const;
    string getUse() const;
    
};

#endif /* defined(__SpectrumProject__xrays__) */
