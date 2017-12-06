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

int rPow(int, int);

int main(int argc, char** argv) {
    int x, y;

    cin >> x >> y;

    cout << rPow(x, y) << endl;

    return 0;

}
int rPow(int n, int k) {
    if (k <= 0) return 1;
    return n * rPow(n, --k);
}
