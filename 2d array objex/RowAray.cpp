/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   functions.cpp
 * Author: Matthew
 *
 * Created on September 21, 2017, 1:00 PM
 */

#include <cstdlib>
#include <iostream>

#include "RowAray.h"

using namespace std;

RowAray :: RowAray(int cols){
    size=cols;
    rowData =new int [size];
    
    for (int i=0;i<size;i++){
        rowData[i] = rand()%10+90;    //10-99
    }
}