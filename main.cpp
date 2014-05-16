//
//  main.cpp
//  SpectrumProject
//
//  Created by Donovan  on 5/13/14.
//  Copyright (c) 2014 Donovan . All rights reserved.
//

#ifdef __cplusplus__
#include <cstdlib>
#else
#include <stdlib.h>
#endif
#include <iostream>
#include <cmath>
#include <stdio.h>      //NULL
#include <iomanip>      //setw()
#include <stdlib.h>     //srand, rand
#include <time.h>       //time
#include "gamma.h"
#include "xrays.h"
#include "ultraviolet.h"
#include "visible.h"
#include "infrared.h"
#include "microwave.h"
#include "radio.h"
#include "grade.h"

class gamma useGamma;
xrays useXrays;
ultraviolet useUV;
visible useVis;
infrared useInf;
microwave useMicro;
radio useRad;
grade useGrade;

const double PI = 3.141592654;   //For "Extra"

void displayTable();
void randomizer();
void displayQuestions(int x, int y);
int answerCounts(int x, int y);

void ClearScreen()
{
    cout << string(25, '\n');
}

void displayTable()
{
    
    cout << "| Spectrum    | Wavelength         | Frequency          | Nature            | Use                     |\n";
    cout << "|-------------|--------------------|--------------------|-------------------|-------------------------|\n";
    cout << "| Gamma       |" << useGamma.getWavelength() <<  setw(4) << "|";
    cout << useGamma.getFrequency() << setw(5) << "|";
    cout << useGamma.getNature() << setw(3) << "|";
    cout << useGamma.getUse() << setw(10) << "|" << endl;
    
    cout << "|-------------|--------------------|--------------------|-------------------|-------------------------|\n";
    cout << "| X-Rays      |" << useXrays.getWavelength() << setw(5) << "|";
    cout << useXrays.getFrequency() << setw(5) << "|";
    cout << useXrays.getNature() << setw(4) << "|";
    cout << useXrays.getUse() << setw(10) << "|" << endl;
    
    cout << "|-------------|--------------------|--------------------|-------------------|-------------------------|\n";
    cout << "| Ultraviolet |" << useUV.getWavelength() << setw(6) << "|";
    cout << useUV.getFrequency() << setw(4) << "|";
    cout << useUV.getNature() << setw(17) << "|";
    cout << useUV.getUse() << setw(10) << "|" << endl;
    
    cout << "|-------------|--------------------|--------------------|-------------------|-------------------------|\n";
    cout << "| Visible     |" << useVis.getWavelength() << setw(5) << "|";
    cout << useVis.getFrequency() << setw(3) << "|";
    cout << useVis.getNature() << setw(12) << "|";
    cout << useVis.getUse() << setw(15) << "|" << endl;
    
    cout << "|-------------|--------------------|--------------------|-------------------|-------------------------|\n";
    cout << "| Infrared    |" << useInf.getWavelength() << setw(7) << "|";
    cout << useInf.getFrequency() << setw(3) << "|";
    cout << useInf.getNature() << setw(12) << "|";
    cout << useInf.getUse() << setw(3) << "|" << endl;
    
    cout << "|-------------|--------------------|--------------------|-------------------|-------------------------|\n";
    cout << "| Microwave   |" << useMicro.getWavelength() << setw(6) << "|";
    cout << useMicro.getFrequency() << setw(3) << "|";
    cout << useMicro.getNature() << setw(10) << "|";
    cout << useMicro.getUse() << setw(16) << "|" << endl;
    
    cout << "|-------------|--------------------|--------------------|-------------------|-------------------------|\n";
    cout << "| Radio       |" << useRad.getWavelength() << setw(3) << "|";
    cout << useRad.getFrequency() << setw(6) << "|";
    cout << useRad.getNature() << setw(11) << "|";
    cout << useRad.getUse() << setw(12) << "|" << endl;
    
    cout << "|_____________________________________________________________________________________________________|\n";
    
}

void displayQuestions(int x, int y)
{
    /*
     X integer controls the question topic
     Y integer controls the spectrum
     */
    
    char answer, correctAnswer;
    string questionSpectrum, questionTopic;
    
    switch (y)
    {
        case 1:
            questionSpectrum = "Gamma";
            break;
        case 2:
            questionSpectrum = "X-Rays";
            break;
        case 3:
            questionSpectrum = "Ultraviolet";
            break;
        case 4:
            questionSpectrum = "Visible";
            break;
        case 5:
            questionSpectrum = "Infrared";
            break;
        case 6:
            questionSpectrum = "Microwave";
            break;
        case 7:
            questionSpectrum = "Radio";
            break;
        default:
            questionSpectrum = "Gamma";
            break;
    }
    
    switch (x)
    {
        case 1:
            questionTopic = "wavelength";
            cout << "What is the " << questionTopic << " of the " << questionSpectrum << " Spectrum?" << endl;
            break;
        case 2:
            questionTopic = "frequency";
            cout << "What is the " << questionTopic << " of the " << questionSpectrum << " Spectrum?" << endl;
            break;
        case 3:
            questionTopic = "nature";
            cout << "What is an example of the " << questionSpectrum << " Spectrum in " << questionTopic << "?" << endl;
            break;
        case 4:
            questionTopic = "use";
            cout << "What is a common " << questionTopic << " for the " << questionSpectrum << " Spectrum?" << endl;
            break;
        default:
            questionTopic = "wavelength";
            cout << "What is the " << questionTopic << " of the " << questionSpectrum << " Spectrum?" << endl;
            break;
    }
    
    
    cout << "--------------------------------------" << endl;
    
    if (x == 1)
    {
        cout << "1. " << useGamma.getWavelength() << endl;
        cout << "2. " << useMicro.getWavelength() << endl;
        cout << "3. " << useVis.getWavelength() << endl;
        cout << "4. " << useUV.getWavelength() << endl;
        cout << "5. " << useXrays.getWavelength() << endl;
        cout << "6. " << useInf.getWavelength() << endl;
        cout << "7. " << useRad.getWavelength() << endl;
        
        if (y == 1){
            correctAnswer = '1';
        }
        else if (y == 2){
            correctAnswer = '5';
        }
        else if (y == 3){
            correctAnswer = '4';
        }
        else if (y == 4){
            correctAnswer = '3';
        }
        else if (y == 5){
            correctAnswer = '6';
        }
        else if (y == 6){
            correctAnswer = '2';
        }
        else if (y == 7){
            correctAnswer = '7';
        }
        else {
            correctAnswer = '1';
        }
    }
    else if (x == 2)
    {
        cout << "1. " << useMicro.getFrequency() << endl;
        cout << "2. " << useInf.getFrequency() << endl;
        cout << "3. " << useGamma.getFrequency() << endl;
        cout << "4. " << useUV.getFrequency() << endl;
        cout << "5. " << useRad.getFrequency() << endl;
        cout << "6. " << useVis.getFrequency() << endl;
        cout << "7. " << useXrays.getFrequency() << endl;
        
        if (y == 1){
            correctAnswer = '3';
        }
        else if (y == 2){
            correctAnswer = '7';
        }
        else if (y == 3){
            correctAnswer = '4';
        }
        else if (y == 4){
            correctAnswer = '6';
        }
        else if (y == 5){
            correctAnswer = '2';
        }
        else if (y == 6){
            correctAnswer = '1';
        }
        else if (y == 7){
            correctAnswer = '5';
        }
        else {
            correctAnswer = '1';
        }
    }
    else if (x == 3)
    {
        cout << "1. " << useInf.getNature() << endl;
        cout << "2. " << useRad.getNature() << endl;
        cout << "3. " << useXrays.getNature() << endl;
        cout << "4. " << useVis.getNature() << endl;
        cout << "5. " << useUV.getNature() << endl;
        cout << "6. " << useGamma.getNature() << endl;
        cout << "7. " << useMicro.getNature() << endl;
        
        if (y == 1){
            correctAnswer = '6';
        }
        else if (y == 2){
            correctAnswer = '3';
        }
        else if (y == 3){
            correctAnswer = '5';
        }
        else if (y == 4){
            correctAnswer = '4';
        }
        else if (y == 5){
            correctAnswer = '1';
        }
        else if (y == 6){
            correctAnswer = '7';
        }
        else if (y == 7){
            correctAnswer = '2';
        }
        else{
            correctAnswer = '6';
        }
    }
    else
    {
        cout << "1. " << useMicro.getUse() << endl;
        cout << "2. " << useInf.getUse() << endl;
        cout << "3. " << useGamma.getUse() << endl;
        cout << "4. " << useXrays.getUse() << endl;
        cout << "5. " << useUV.getUse() << endl;
        cout << "6. " << useRad.getUse() << endl;
        cout << "7. " << useVis.getUse() << endl;
        
        if (y == 1){
            correctAnswer = '3';
        }
        else if (y == 2){
            correctAnswer = '4';
        }
        else if (y == 3){
            correctAnswer = '5';
        }
        else if (y == 4){
            correctAnswer = '7';
        }
        else if (y == 5){
            correctAnswer = '2';
        }
        else if (y == 6){
            correctAnswer = '1';
        }
        else if (y == 7){
            correctAnswer = '6';
        }
        else{
            correctAnswer = '3';
        }
    }
    
    cin >> answer;
        
    if (answer == correctAnswer)
    {
        cout << "Good job!" << endl;
        useGrade.setCorrectCount(1);
        
    }
    else
    {
        cout << "That is incorrect." << endl;
        useGrade.setIncorrectCount(1);
    }
}

void pendulum()
{
    //model formula = 2*pi * sqrt(length/gravity)
    double length, gravity;
    double period;
    int choice;
    
    cout << "Are you looking for period, length, or gravity?" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "1. Period(T)" << endl;
    cout << "2. Length(l)" << endl;
    cout << "3. Gravity(g)" << endl;
    cin >> choice;
    
    switch(choice)
    {
        case 1:
            cout << "What is the length: ";
            cin >> length;
            
            cout << "What is the gravity: ";
            cin >> gravity;
            
            period = (2*PI)*(sqrt(length/gravity));
            cout << "Your period is : " << period << "seconds." << endl;
            cout << endl;
            break;
        case 2:
            cout << "What is the period: ";
            cin >> period;
            
            cout << "What is the gravity: ";
            cin >> gravity;
            
            length = (pow((period/(2*PI)),2)) * gravity;
            cout << "Your length is " << length << "meters." << endl;
            cout << endl;
            break;
        case 3:
            cout << "What is the period: ";
            cin >> period;
            
            cout << "What is the length: ";
            cin >> length;
            
            gravity = (length /(pow((period/(2*PI)),2)));
            cout << "Your gravity is: " << gravity << "m/s/s." <<  endl;
            cout << endl;
            break;
        default:
            cout << "Try again." << endl;
            pendulum();
            break;
    }
}

void spring()
{
    //model formula = 2*pi * sqrt(mass/ spring constant)
    double mass, springConstant;
    double period;
    int choice;
    
    cout << "Are you looking for period, mass, or the spring constant?" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "1. Period(T)" << endl;
    cout << "2. Mass(m)" << endl;
    cout << "3. Spring constant(K)" << endl;
    cin >> choice;
    
    switch(choice)
    {
        case 1:
            cout << "What is the mass: ";
            cin >> mass;
            
            cout << "What is the spring constant: ";
            cin >> springConstant;
            
            period = (2*PI)*(sqrt(mass/springConstant));
            cout << "Your period is : " << period << " seconds." << endl;
            cout << endl;
            break;
        case 2:
            cout << "What is the period: ";
            cin >> period;
            
            cout << "What is the spring constant: ";
            cin >> springConstant;
            
            mass = (pow((period/(2*PI)),2)) * springConstant;
            cout << "Your mass is " << mass << "kilograms." << endl;
            cout << endl;
            break;
        case 3:
            cout << "What is the period: ";
            cin >> period;
            
            cout << "What is the mass: ";
            cin >> mass;
            
            springConstant = (mass /(pow((period/(2*PI)),2)));
            cout << "Your spring constant is: " << springConstant << endl;
            cout << endl;
            break;
        default:
            cout << "Try again." << endl;
            spring();
            break;
    }
}

void wave()
{
    int choice;
    char fOrP;
    double period;
    double waveSpeed, wavelength, frequency;
    
    cout << "What are you looking for?" << endl;
    cout << "-------------------------" << endl;
    cout << "1. Wave Speed" << endl;
    cout << "2. Wavelength" << endl;
    cout << "3. Frequency" << endl;
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            cout << "What is the wavelength: ";
            cin >> wavelength;
            
            cout << "Frequency or Period? (f or p)" << endl;
            cin >> fOrP;
            if (fOrP == 'f')
            {
                cout << "What is the frequency: ";
                cin >> frequency;
                
                waveSpeed = wavelength * frequency;
                cout << "The wave speed is " << waveSpeed << "m/s." << endl;
            }
            else
            {
                cout << "what is the period: ";
                cin >> period;
                
                waveSpeed = wavelength / period;
                cout << "The wave speed is " << waveSpeed << "m/s." << endl;
            }
            break;
        case 2:
            cout << "What is the wave speed: ";
            cin >> waveSpeed;
            
            cout << "Frequency or Period? (f or p)" << endl;
            cin >> fOrP;
            if (fOrP == 'f')
            {
                cout << "What is the frequency: ";
                cin >> frequency;
                
                wavelength = waveSpeed / frequency;
                cout << "The wavelength is " << wavelength << " meters." << endl;
            }
            else
            {
                cout << "what is the period: ";
                cin >> period;
                
                wavelength = waveSpeed * period;
                cout << "The wavelength is " << wavelength << " meters." << endl;
            }
            break;
        case 3:
            cout << "What is the wave speed: ";
            cin >> waveSpeed;
            
            cout << "What is the wavelength: ";
            cin >> wavelength;
            
            frequency = waveSpeed / wavelength;
            cout << "The frequency is " << frequency << " Hz." << endl;
            cout << "The period is " << (1 / frequency) << "seconds." << endl;
            break;
        default:
            cout << "Try again." << endl;
            wave();
            break;
    }
}

void extrasMenu()
{
    char choice;
    
    cout << "Which Category?" << endl;
    cout << "--------------------" << endl;
    cout << "1. Period of Pendulum" << endl;
    cout << "2. Period of Spring" << endl;
    cout << "3. Waves 'n Stuff" << endl;
    cin >> choice;
    cout << endl;
    
    if (choice == '1') {
        ClearScreen();
        pendulum();
    }
    else if (choice == '2'){
        ClearScreen();
        spring();
    }
    else if (choice == '3'){
        ClearScreen();
        wave();
    }
    else {
        ClearScreen();
        extrasMenu();
    }
    
}

int main(int argc, const char * argv[])
{
    char choice;
    char playAgain = 'y';
    
    do
    {
        cout << "         Menu        " << endl;
        cout << "---------------------" << endl;
        cout << "1. View Display Table" << endl;
        cout << "2. Play Question Game" << endl;
        cout << "3. Extra" << endl;
        cout << "Q. Quit" << endl;
        cin >> choice;
        
        if (choice == '1')
        {
            ClearScreen();
            displayTable();
        }
        
        else if (choice == '2')
        {
            int infoChoice = (rand() % 4) + 1;           //Generates random number between 1 and 4
            int spectrumChoice = (rand() % 7) + 1;       //Generates random number between 1 and 7
            
            ClearScreen();
            displayQuestions(infoChoice, spectrumChoice);
        }
        else if (choice == '3')
        {
            ClearScreen();
            extrasMenu();
        }
        else if (choice == 'Q' || choice == 'q')
        {
            return 0;
        }
        
        cout << "---------------------------------------" << endl;
        cout << "Would you like to go again? (y for yes)" << endl;
        cin >> playAgain;
        ClearScreen();
        
    }while (playAgain == 'y');
    
    cout << "Total Questions Answered: " << useGrade.getCorrectAnswerCount() + useGrade.getIncorrectAnswerCount() << endl;
    cout << "------------------------------" << endl;
    cout << "Correct: " << useGrade.getCorrectAnswerCount() << endl;
    cout << "Incorrect: " << useGrade.getIncorrectAnswerCount() << endl;

    return 0;
}

