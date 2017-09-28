/* 
 * File:   Table.h
 * Author: Dr. Mark E. Lehr
 * Created on September 1, 2016, 8:36 PM
 * Specification for the Table
 */

#ifndef TABLE_H
#define	TABLE_H

#include "RowAray.h"

class Table{
    private:
        int szRow;
        int szCol;
        int **records;
    public:
        Table(int,int);
        ~Table(){for(int i = 0; i < szRow; ++i) {
            delete [] records[i];}
            delete [] records;
        }
        int getSzRow(){return szRow;}
        int getSzCol(){return szCol;}
        int getData(int,int);
};

#endif	/* TABLE_H */