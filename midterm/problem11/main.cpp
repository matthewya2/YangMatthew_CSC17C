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

float prob(float);

int main(int argc, char** argv) {
    float x=.5;
    cout<<prob(x);
    
    return 0;
}

float prob(float x){
    float tol=.000001;
    if(abs(x)<tol)return (2*x-(2*x*2*x*2*x)/6);
    x/=2;
    return 2*prob(x)/(1+prob(x)*prob(x));   
}