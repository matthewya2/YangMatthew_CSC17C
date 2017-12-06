/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on December 6, 2017, 11:04 AM
 */

#include <iostream>
using namespace std;

//User Libraries Here
#include "Tlink.h"
Tlink *insert();
/*
 * 
 */
int main(int argc, char** argv) {
    
    return 0;
}
Tlink *insert(){
    int val[9]={2,3,4,5,6,7,8,9,10};
    Tlink *lnkList;
    int rootV=1; //starting root value
    Tlink *root=new Tlink;//Allocate a link at the front of the list
    root->data=rootV;     //Initialize with data
    root->linkPtr=NULL; //At the moment not pointing it to anything
    root->linkPtrL=NULL;
    root->linkPtrR=NULL;
    Tlink *next=root;    //Create a pointer to progress through the list
    
    for (int i=0;i<9;i++){
        Tlink *temp=new Tlink; //Allocate a new link
        if ((next->data)>val[i]){
            
        }
    }
     
    
}
