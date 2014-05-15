//
//  infrared.h
//  SpectrumProject
//
//  Created by Donovan  on 5/13/14.
//  Copyright (c) 2014 Donovan . All rights reserved.
//

#ifndef __SpectrumProject__infrared__
#define __SpectrumProject__infrared__

#include <iostream>
using namespace std;

class infrared
{
private:
    string infWavelength;
    string infFrequency;
    string infNature;
    string infUse;
    
public:
    infrared()
    {
        infWavelength = "700 nm to 1 mm";
        infFrequency = "430 THz to 300 GHz";
        infNature = "Sunlight";
        infUse = "Treating skin diseases ";
    }
    
    string getWavelength() const;
    string getFrequency() const;
    string getNature() const;
    string getUse() const;
};


#endif /* defined(__SpectrumProject__infrared__) */
