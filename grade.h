//
//  grade.h
//  SpectrumProject
//
//  Created by Donovan McCray on 5/15/14.
//  Copyright (c) 2014 Donovan McCray. All rights reserved.
//

#ifndef __SpectrumProject__grade__
#define __SpectrumProject__grade__

#include <iostream>
using namespace std;

class grade
{
private:
    int correctAnswerCount;
    int incorrectAnswerCount;
    
public:
    grade() {}
    
    void setCorrectCount(int x);
    void setIncorrectCount(int x);
    int getCorrectAnswerCount();
    int getIncorrectAnswerCount();
    
};

#endif /* defined(__SpectrumProject__grade__) */
