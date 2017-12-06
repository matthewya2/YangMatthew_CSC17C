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
#include <ctime>
#include <stdio.h>
#include <algorithm>

using namespace std;

void bsort();
void sSort();
int main(int argc, char** argv) {
    
    srand (time(NULL));
    bsort();
    sSort();

    return 0;
}

void bsort(){
    int search,i;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    long long int ceq=0,cpp=0,cLt=0,cp=0,cmod=0,ceqeq=0,cdiv=0,cmin=0;
    
    const clock_t begin_time = clock();
    
    for(int k=0;k<75000000;k++){      
        int i, j;        
        int n = sizeof(arr)/sizeof(arr[0]);     ceq++;cdiv++;
        for (i = 0; i < n-1; i++)               ceq++;cLt++;cmin++;cpp++;  
            for (j = 0; j < n-i-1; j++)         ceq++;cLt++;cmin++;cmin++;cpp++;
                if (arr[j] > arr[j+1])          cLt++;cp++;
                   swap(arr[j], arr[j+1]);    cp++;
    }
    float lserchT=( clock () - begin_time ) /  CLOCKS_PER_SEC;
    cout<<" bubble sort took "<<lserchT<<endl;
    
    cout<<"= used: "<<ceq<<" times"<<endl;
    cout<<"/ used: "<<cdiv<<" times"<<endl;
    cout<<"++ used: "<<cpp<<" times"<<endl;
    cout<<"< used: "<<cLt<<" times"<<endl;
    cout<<"+ used: "<<cp<<" times"<<endl;
    
   
}
void sSort(){
    long long int ceq=0,cpp=0,cLt=0,cp=0,cmod=0,ceqeq=0,cLtt=0,cmin=0;
    int n=10;  
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    
    const clock_t begin_time = clock();
    for(int k=0;k<75000000;k++){      
    int pos_min,temp;

	for (int i=0; i < n-1; i++){     ceq++;cLt++;cmin++;cpp++;  
	
	    pos_min = i;    ceq++;
		
		for (int j=i+1; j < n; j++){ ceq++;cp++;cLt++;cpp++; 
		

		if (arr[j] < arr[pos_min]){  cLt++;
                   pos_min=j;           ceq++;
                }
		}
            if (pos_min != i){
                 temp = arr[i];     ceq++;
                 arr[i] = arr[pos_min]; ceq++;
                 arr[pos_min] = temp;   ceq++;
            }
	}
    }
    float bserchT=( clock () - begin_time ) /  CLOCKS_PER_SEC;
    cout<<" selection sort took "<<bserchT<<endl;
    
    cout<<"= used: "<<ceq<<" times"<<endl;
    cout<<"++ used: "<<cpp<<" times"<<endl;
    cout<<"< used: "<<cLt<<" times"<<endl;
    cout<<"+ used: "<<cp<<" times"<<endl;
   
   
}