//
//  grade.cpp
//  SpectrumProject
//
//  Created by Donovan McCray on 5/15/14.
//  Copyright (c) 2014 Donovan McCray. All rights reserved.
//

#include "grade.h"

void grade::setCorrectCount(int x)
{
    correctAnswerCount += x;
}

void grade::setIncorrectCount(int x)
{
    incorrectAnswerCount += x;
}

int grade::getCorrectAnswerCount()
{
    return correctAnswerCount;
}

int grade::getIncorrectAnswerCount()
{
    return incorrectAnswerCount;
}