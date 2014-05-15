//
//  visible.h
//  SpectrumProject
//
//  Created by Donovan  on 5/13/14.
//  Copyright (c) 2014 Donovan . All rights reserved.
//

#ifndef __SpectrumProject__visible__
#define __SpectrumProject__visible__

#include <iostream>
using namespace std;

class visible
{
private:
    string visWavelength;
    string visFrequency;
    string visNature;
    string visUse;
    
public:
    visible()
    {
        visWavelength = "380 nm to 700 nm";
        visFrequency = "790 THz to 430 THz";
        visNature = "Sunlight";
        visUse = "Flashlights";
    }
    
    string getWavelength() const;
    string getFrequency() const;
    string getNature() const;
    string getUse() const;
};

#endif /* defined(__SpectrumProject__visible__) */
