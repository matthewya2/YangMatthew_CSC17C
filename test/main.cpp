/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on October 18, 2017, 2:22 PM
 */

#include <cstdlib>
#include <iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
     vector<int> ar = { 1, 2, 3, 4, 5 };
     
    // Declaring iterator to a vector
    vector<int>::iterator ptr;
     
    // Displaying vector elements using begin() and end()
    cout << "The vector elements are : ";
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << " ";
     
    
    return 0;    
}

