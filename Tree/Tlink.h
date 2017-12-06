/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tlink.h
 * Author: Matthew
 *
 * Created on December 6, 2017, 11:06 AM
 */

#ifndef TLINK_H
#define TLINK_H
//Composition of a Link
struct Tlink{
    int data;		//Any integer data, to be changed any class with templates later
    Tlink *linkPtr;  //Self Reference which when utilized forms a linked list
    Tlink *linkPtrR;
    Tlink *linkPtrL;
};


#endif /* TLINK_H */

