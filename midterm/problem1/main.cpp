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

using namespace std;

void lSearch();
void bSearch();
int main(int argc, char** argv) {
    
    srand (time(NULL));
    lSearch();
    bSearch();

    return 0;
}

void lSearch(){
    int search,i;
    int arr[10] = {1,2,3,4,5, 6,7,8,9,10};
    long long int ceq=0,cplusp=0,cLt=0,cp=0,cmod=0,ceqeq=0;
    
    const clock_t begin_time = clock();
    
    for(int j=0;j<2000000000;j++){      ceq++;cLt++;cplusp++;
        search=rand()%10+1;     ceq++;cmod++;cp++;
        for(i=0;i<10;i++){      ceq++;cLt++;cplusp;
            if(search==arr[i]){ ceqeq++;
                //cout << "Item is found at location " << i+1 << endl;
                break;
            }
            else {
                //cout << "does not exist!" << endl;
                break;
            }
        }
    }
    float lserchT=( clock () - begin_time ) /  CLOCKS_PER_SEC;
    cout<<" linear search took "<<lserchT<<"seconds"<<endl;
    
    cout<<"= used: "<<ceq<<" times"<<endl;
    cout<<"++ used: "<<cplusp<<" times"<<endl;
    cout<<"< used: "<<cLt<<" times"<<endl;
    cout<<"+ used: "<<cp<<" times"<<endl;
    cout<<"% used: "<<cmod<<" times"<<endl;
    cout<<"== used: "<<ceqeq<<" times"<<endl;
}
void bSearch(){
    long long int ceq=0,cplusp=0,cLt=0,cp=0,cmod=0,ceqeq=0,cLtt=0,cmin=0;
    int n, i, search, first, last, middle;  
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    
    const clock_t begin_time = clock();
    for(int j=0;j<2000000000;j++){      ceq++;cLt++;cplusp++;
    search=rand()%10+1;     ceq++;cmod++;cp++;cLtt++;
	while (first <= last){  
            if(arr[middle] < search){ cLt++;
                first = middle + 1;     ceq++;cp++;
            }
            else if(arr[middle] == search){ ceqeq++;
                //cout<<search<<" found at location "<<middle+1<<"\n";
                continue;
            }
            else{
                last = middle - 1;      ceq++;cmin++;
            }
            middle = (first + last)/2;  ceq++;cp++;
	}
	if(first > last){   cLt++;
            //cout<<"Not found! "<<search<<" is not present in the list.";
            
	}
    }
    float bserchT=( clock () - begin_time ) /  CLOCKS_PER_SEC;
    cout<<" binary search took "<<bserchT<<"seconds"<<endl;
    
    cout<<"= used: "<<ceq<<" times"<<endl;
    cout<<"++ used: "<<cplusp<<" times"<<endl;
    cout<<"< used: "<<cLt<<" times"<<endl;
    cout<<"+ used: "<<cp<<" times"<<endl;
    cout<<"% used: "<<cmod<<" times"<<endl;

   
}