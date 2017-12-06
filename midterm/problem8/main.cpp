/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on November 6, 2017, 8:17 PM
 */

#include <cstdlib>//Random number seed
#include <ctime>//Set the seed
#include <iostream>//I/O
#include <algorithm>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int dieRes[4]={0};
    int dubs=0, trips=0, quads=0, dubdubs=0;
    int times=100000;
    srand(static_cast<unsigned int>(time(0)));
    
    for(int j=0;j<times;j++){
        for(int i=0;i<4;i++){
            dieRes[i]=rand()%6+1;
        }
        int n=sizeof(dieRes)/sizeof(dieRes[0]);
        sort(dieRes,dieRes+n);

        if (dieRes[0]==dieRes[1]){
            if (dieRes[0]==dieRes[2]){
                if (dieRes[0]==dieRes[3]){
                    quads++;continue;
                }
                trips++;continue;
            }
            if (dieRes[2]==dieRes[3]){
                dubdubs++;continue;
            }
            dubs++;
        }
        
        if (dieRes[1]==dieRes[2]){
            if (dieRes[1]==dieRes[3]){
                trips++;continue;
            }
            dubs++;
        }
        if (dieRes[2]==dieRes[3]){dubs++;}
        
    }
    cout<<"dubs "<<dubs<<endl;
    cout<< "dubdubs "<<dubdubs<<endl;
    cout<<"trips "<<trips<<endl;
    cout<<"quads "<<quads<<endl;
    
    
    return 0;
}

