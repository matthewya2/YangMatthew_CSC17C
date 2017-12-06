/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.cpp
 * Author: Matthew
 *
 * Created on September 27, 2017, 7:16 PM
 */

#include <cstdlib>
#include "Table.h"


using namespace std;

Table::Table(unsigned int r, unsigned int c){
    szRow=r;
    szCol=c;
    columns = new RowAray*[c];
    
    for(int i=0; i<c; i++){
        columns[i] = new RowAray(r);
    }
    
}

void Table::setData(int r, int c, int value) {
        columns[c]->setData(r,value);
}

Table::Table(const Table &tab) {
    szRow=tab.getSzRow();
    szCol=tab.getSzCol();
    
    columns = new RowAray*[szCol];
    
    for(int i=0; i<szCol;i++) {
        columns[i] = new RowAray(szRow);
        for(int j = 0; j < szRow; j++) {
            columns[i]->setData(j, tab.getData(j, i));
        }
    }
}
Table::~Table(){
    for(int i=0; i<szCol; i++){
        delete columns[i];
    }
    delete[] columns;
}
int Table::getData(int r,int c) const{
    return columns[c]->getData(r);
}