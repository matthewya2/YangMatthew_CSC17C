/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on November 8, 2017, 11:17 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

float s(float);
float c(float);
int main(int argc, char** argv) {
    float x=M_PI/4;
    cout<<c(x);
    
    return 0;
}

float c(float x){
    float tol=.000001;
    if(abs(x)<tol)return 1/(2*x)+(2*x)/6;
    x/=2;
    return (.5)*c(x)*s(x);   
}
float s(float x){
    float tol=.000001;
    if(abs(x)<tol)return 1+(2*x*2*x)/2;
    x/=2;
    float a=c(x);
    float b=s(x);
    return (a*a*b*b)/(a*a-b*b);   
}