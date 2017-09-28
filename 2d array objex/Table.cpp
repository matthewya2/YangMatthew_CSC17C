/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Table.cpp
 * Author: Matthew
 *
 * Created on September 21, 2017, 1:57 PM
 */

#include <cstdlib>
#include "Table.h"
#include "RowAray.h"
using namespace std;

/*
 * 
 */
Table::Table(int rows,int cols){
    szRow=rows;
    szCol=cols;
    
    
    records = new int*[szRow];
    for (int count=0;count<szRow;count++){
        records[count] = new int [szCol];
    }
    
    for (int j=0;j<szCol;j++){
        for (int i=0;i<szRow;i++){
        records[i][j] = rand()%90+10;    //10-99
        }
    }
}
int Table::getData(int countR, int countC){
    return records[countR][countC];
}