/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on November 7, 2017, 12:24 PM
 */

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
srand(static_cast<unsigned int>(time(0)));
    int result,percentW=0,j,i;
    float countT=0, divided=0, sum;
    
        for(i=0;countT<10;i++){
            
            result=rand()%10+1;
            if (result<=3){
                percentW++;
            }
            else 
            {
                percentW=0;
                
            }
            if (percentW==5){
                countT++;
                percentW=0;
            }
            
        }
        
    
    divided=countT/i;
    cout<< "i="<<i<<" countT="<<countT<<" divided= "<<divided;
    return 0;
}

