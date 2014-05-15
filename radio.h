//
//  radio.h
//  SpectrumProject
//
//  Created by Donovan  on 5/13/14.
//  Copyright (c) 2014 Donovan . All rights reserved.
//

#ifndef __SpectrumProject__radio__
#define __SpectrumProject__radio__

#include <iostream>
using namespace std;

class radio
{
private:
    string radFrequency;
    string radWavelength;
    string radNature;
    string radUse;
    
public:
    radio()
    {
        radFrequency = "300 GHz to 3 Hz";
        radWavelength = "1 mm to 100,000 km";
        radNature = "Lightning";
        radUse = "Radio Stations";
    }
    
    string getWavelength() const;
    string getFrequency() const;
    string getNature() const;
    string getUse() const;
};
#endif /* defined(__SpectrumProject__radio__) */
