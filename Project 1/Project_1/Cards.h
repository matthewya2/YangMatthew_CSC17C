/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cards.h
 * Author: rcc
 *
 * Created on December 6, 2016, 2:42 PM
 */
#include <cstdlib>  //Rand and Set Random
#include <iostream>
using namespace std;

#ifndef CARDS_H
#define CARDS_H

class Deck{
    
    protected:
        int *freqofC;
        
        int *cards;
        
        int MAX;
        
    public:
        Deck(int max){
            MAX=max;
        }
        void Shuffle();
        
        ~Deck(){
            
            delete [] freqofC;
            
            delete [] cards;
        }
        
};

class Cards:public Deck{
    
    private:
        
        string Name;
        
        int Turns;
        
        int Cheater;        //cheater mode
        
        int pointsT[100]={0};
    public:
        Cards(int max):Deck(max){
        Turns=0;
        }
        
        void Pick();
        
        void Display();
        
        bool ElimCheck(bool);
        
        void Score();
        
        
        virtual void Intro();
        
        void Turn();
        
        void operator++(int){
            
            this->Turns++;
            
        }
        
};




#endif /* CARDS_H */

