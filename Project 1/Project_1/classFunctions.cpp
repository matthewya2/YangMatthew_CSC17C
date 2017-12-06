/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <set>
#include "Cards.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <map>
#include <cstring>  //strcat
#include <iterator>
#include <numeric> //For accumulate operation
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

void Cards::Intro(){
    map <int, string> names;
    
    map <int, string> :: iterator itr;
    string fName, lName;
    
    cout <<"please enter your first Name: ";
    cin>>fName;
    
    cout <<"please enter your last Name: ";
    cin>>lName;
    names.insert(pair<int, string>(1,fName));
    names.insert(pair<int, string>(2,lName));
    
    itr = names.begin();
    
    Name=fName+' '+lName;
    
    cout << "Hello, "<<itr->second<<"!"<<endl;
    
    cout <<"would you like to play cheater/tester mode? (1:Yes/2:No)"<<endl;
    cin >> Cheater;
    
    while(Cheater!=1 && Cheater!=2){
        
        cout << "please enter a valid input from 1-2"<<endl;
        cin>>Cheater;
        
    }
}

void Deck::Shuffle(){
    unsigned seed = time(0);        //creates randomness
    srand(seed);
    
    
    cards = new int [MAX];
    
    freqofC = new int [MAX/2];
    
    for(int i=0; i<MAX/2; ++i) {
        freqofC[i]=0;
    }
    int num=0;
    
    
    for(int i=0; i<MAX; ++i) {
        int num = rand() % (MAX/2) + 1;
        ++freqofC[num-1];
        
        if (freqofC[num-1]>2) {         //makes sure that no card has the 
                                        //same value more than twice.
            int numP=num;
            do{ 
                --freqofC[num-1];
                num = rand() % (MAX/2) + 1;          
                ++freqofC[num-1];
                if (num==numP){continue;}
            }while(freqofC[num-1]>2);
        }
        
        
        
        cards[i] = num;
    }
            
       }



void Cards::Display(){
    string  cad1P2= "| 1 |",cad2P2= "| 2 |",
            
            cad3P2= "| 3 |",cad4P2= "| 4 |",
           
            cad5P2= "| 5 |",cad6P2= "| 6 |",
            
            cad7P2= "| 7 |",cad8P2= "| 8 |",
            
            cad9P2= "| 9 |",cad10P2="|10 |",
            
            cad11P2="|11 |",cad12P2="|12 |",
            
            cad13P2="|13 |",cad14P2="|14 |",
            
            cad15P2="|15 |",cad16P2="|16 |",
            
            cad17P2="|17 |",cad18P2="|18 |",
            
            cad19P2="|19 |",cad20P2="|20 |",
            
            cad21P2="|21 |",cad22P2="|22 |",
            
            cad23P2="|23 |",cad24P2="|24 |",
            
            cad25P2="|25 |",cad26P2="|26 |",
            
            cad27P2="|27 |",cad28P2="|28 |",
            
            cad29P2="|29 |",cad30P2="|30 |",
            
            cad31P2="|31 |",cad32P2="|32 |",
            
            cad33P2="|33 |",cad34P2="|34 |",
            
            cad35P2="|35 |",cad36P2="|36 |",
            
            cad37P2="|37 |",cad38P2="|38 |",
            
            cad39P2="|39 |",cad40P2="|40 |",
            
            cadP1="___", cadP3= "|___|", 
            
            X="| X |";
    
    
    //cards being turned into X's if they are removed from the game
    if (cards[0]==0){cad1P2=X;}    if (cards[1]==0){cad2P2=X;}
    
    if (cards[2]==0){cad3P2=X;}    if (cards[3]==0){cad4P2=X;}
    
    if (cards[4]==0){cad5P2=X;}    if (cards[5]==0){cad6P2=X;}
    
    if (cards[6]==0){cad7P2=X;}    if (cards[7]==0){cad8P2=X;}
    
    if (cards[8]==0){cad9P2=X;}    if (cards[9]==0){cad10P2=X;}
    
    if (cards[10]==0){cad11P2=X;}   if (cards[11]==0){cad12P2=X;}
    
    if (cards[12]==0){cad13P2=X;}   if (cards[13]==0){cad14P2=X;}
    
    if (cards[14]==0){cad15P2=X;}   if (cards[15]==0){cad16P2=X;}
    
    if (cards[16]==0){cad17P2=X;}   if (cards[17]==0){cad18P2=X;}
    
    if (cards[18]==0){cad19P2=X;}   if (cards[19]==0){cad20P2=X;}
    
    
    
    //for normal mode
    if (MAX>=30){
        
    
        if (cards[20]==0){cad21P2=X;}   if (cards[21]==0){cad22P2=X;}

        if (cards[22]==0){cad23P2=X;}   if (cards[23]==0){cad24P2=X;}

        if (cards[24]==0){cad25P2=X;}   if (cards[25]==0){cad26P2=X;}

        if (cards[26]==0){cad27P2=X;}   if (cards[27]==0){cad28P2=X;}

        if (cards[28]==0){cad29P2=X;}   if (cards[29]==0){cad30P2=X;}
    }
    
    //for hard mode
    if (MAX>=40){
        if (cards[30]==0){cad31P2=X;}   if (cards[31]==0){cad32P2=X;}
    
        if (cards[32]==0){cad33P2=X;}   if (cards[33]==0){cad34P2=X;}

        if (cards[34]==0){cad35P2=X;}   if (cards[35]==0){cad36P2=X;}

        if (cards[36]==0){cad37P2=X;}   if (cards[37]==0){cad38P2=X;}

        if (cards[38]==0){cad39P2=X;}   if (cards[39]==0){cad40P2=X;}

    }
    
    
    
    
    
    //cards being displayed
    //easy mode
    if (MAX==20){
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl;
    
    cout <<cad1P2<<" "<<cad2P2<<" "<<cad3P2<<" "<<cad4P2<<" "<<cad5P2<<" "
            <<cad6P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad7P2<<" "<<cad8P2<<" "<<cad9P2<<" "<<cad10P2<<" "<<cad11P2<<" "<<
            cad12P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<
            endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad13P2<<" "<<cad14P2<<" "<<cad15P2<<" "<<cad16P2<<" "<<cad17P2<<" "
            <<cad18P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<endl;
    
    cout <<cad19P2<<" "<<cad20P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<endl;
    
    }

    
    //normal mode
    if (MAX==30){
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl;
    
    cout <<cad1P2<<" "<<cad2P2<<" "<<cad3P2<<" "<<cad4P2<<" "<<cad5P2<<" "
            <<cad6P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad7P2<<" "<<cad8P2<<" "<<cad9P2<<" "<<cad10P2<<" "<<cad11P2<<" "<<
            cad12P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<
            endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad13P2<<" "<<cad14P2<<" "<<cad15P2<<" "<<cad16P2<<" "<<cad17P2<<" "
            <<cad18P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad19P2<<" "<<cad20P2<<" "<<cad21P2<<" "<<cad22P2<<" "<<cad23P2<<" "
            <<cad24P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad25P2<<" "<<cad26P2<<" "<<cad27P2<<" "<<cad28P2<<" "<<cad29P2<<" "
            <<cad30P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    }
    
    
    //hard mode
    if (MAX==40){
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl;
    
    cout <<cad1P2<<" "<<cad2P2<<" "<<cad3P2<<" "<<cad4P2<<" "<<cad5P2<<" "
            <<cad6P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad7P2<<" "<<cad8P2<<" "<<cad9P2<<" "<<cad10P2<<" "<<cad11P2<<" "<<
            cad12P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<
            endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad13P2<<" "<<cad14P2<<" "<<cad15P2<<" "<<cad16P2<<" "<<cad17P2<<" "
            <<cad18P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad19P2<<" "<<cad20P2<<" "<<cad21P2<<" "<<cad22P2<<" "<<cad23P2<<" "
            <<cad24P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad25P2<<" "<<cad26P2<<" "<<cad27P2<<" "<<cad28P2<<" "<<cad29P2<<" "
            <<cad30P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)
            <<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad31P2<<" "<<cad32P2<<" "<<cad33P2<<" "<<cad34P2<<" "<<cad35P2<<" "
            <<cad36P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3
            <<endl;
    
    cout << " "<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<setw(6)<<cadP1<<endl; 
    
    cout <<cad37P2<<" "<<cad38P2<<" "<<cad39P2<<" "<<cad40P2<<endl;
    
    cout <<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<cadP3<<" "<<endl;    
        
    }
    
    //cheater mode
    if (Cheater==1){
        
        for(int i=0 ,j=1;i<MAX;i++,j++){

            cout <<i+1<<"."<<cards[i]<<"  ";
            
            if(j==7){
                
                j=0;
                cout<<endl;
            
            }
            
        }
    }
    
    cout <<endl<<endl;
}

void Cards::Pick(){
    queue <int> elims;
    int pointC=0, points=0;
    stack <int> picks;
    
    int pick, pick2;
    cout <<"what is the first card you want to check?"<<endl;
    
    cin >>pick;
    picks.push(pick);
    
    
    while(pick<1 || pick>MAX) {
        picks.pop();
        cout<<"you must pick a card that exists on the screen above,"
                "and that does not have an X on it.";
        cin>>pick;
        picks.push(pick);
    }
    
    
    while(cards[pick-1]==0){
        picks.pop();
        cout << "You have already picked that card. Please pick a card"
                " that is on the board, and that does not have an X on it.";
        cin>>pick;
        picks.push(pick);
        
    }

    cout <<"how about your second?"<<endl;
    cin >>pick2;
    picks.push(pick2);
    
    
    while (pick2<1 || pick2>MAX) {
        picks.pop();
        cout << "you must pick a card "
            "that exists on the screen above, and that does not have an X "
            "on it."<<endl;
        
        cin>>pick2;
        picks.push(pick2);
        
    }
    
    
    while (picks.top()==pick){
        picks.pop();
            cout << "you must pick a number that is different than the first "
                    <<endl<<"card you have picked. Pick another card for your"
                    " second card."<<endl;
            
        cin>>pick2;
        picks.push(pick2);
            
        }
    
    
    while(cards[pick2-1]==0){
        picks.pop();
        cout << "You have already picked that card. Please pick a card"
                " that is on the board, and that does not have an X on it.";
        cin>>pick2;
        picks.push(pick2);
        
    }
    
    //outputs the results of the cards
    cout << endl << "Card number "<< picks.top()<<" has a "<<
            cards[picks.top()-1]<<" under it." <<endl;
    picks.pop();
    cout <<"Card number "<< picks.top()<<" has a "<<
            cards[picks.top()-1]<<" under it." <<endl<<endl;
    
    
    //if the cards have the same number underneath them, they are eliminated
        
        if (cards[pick2-1]==cards[pick-1]){ 
            elims.push(pick);                   //queue
            elims.push(pick2);
            cout <<"Cards "<<elims.front();
            elims.pop();
            cout << " and " <<elims.front() <<
                    " are eliminated." << endl<<endl;
            elims.pop();
             
        cards[pick2-1]=0;         //sets card pick to zero
        
        cards[pick-1]=0;
        if (pointC==0){pointsT[Turns]+=5;}
        if (pointC>0 && pointC<3){pointsT[Turns]+=2;}
        else{pointsT[Turns]++;}
        }
        else{
            pointC++;
        }
    
            
    
    
}

bool Cards::ElimCheck(bool isDone){
    int cnt=0;    
    
    
    
        for(int i=0; i<MAX; ++i){
            if( cards[i]==0 ) ++cnt;
        }
        if(cnt==MAX) isDone = true;
    
        // displays the number of terminated cards
        cout << "You have eliminated " << cnt << " cards out of "<<MAX<<
                "." << endl;
        
        if(cnt<0 || cnt>MAX){
            
            string error;
            
            error ="an error has occurred, exiting program.";
            throw error;
        }
        return isDone;
            
        
}





void Cards::Turn(){
    
    cout <<"This is turn: "<<Turns<<endl;
    
}

void Cards::Score(){
    int n = sizeof(pointsT)/sizeof(pointsT[0]);
    int perfect=MAX/2;      //the perfect game
    
    vector<int> p(pointsT, pointsT+n);
    cout << "You have Won! you have completed the game in " <<Turns<<
            " turns.";

    
    cout << endl;
    cout<<"You have scored: ";
    cout<<(accumulate(p.begin(), p.end(), 0));
    cout<<" points!"<<endl;
    
        //gives special message if you had a perfect game
    if(perfect==Turns){
        
        cout << "WOW! A perfect game! You're amazing!!";
         
    }
    
        //tells you how well you did on the game if you did not have 
        //a perfect game
    
    if (Turns>perfect && Turns<=perfect+5){
        
        cout <<"That was a pretty awesome game!";
        
    }
    
    if (Turns>perfect+5 && Turns<=perfect+15){
        
        cout << "That was a pretty good game, although you can do better.";
        
    }
    
    if (Turns>perfect+15 && Turns<=perfect+25){
        
        cout << "a decent game. Try again!";
        
    }
    
    if (Turns>perfect+25){
        
        cout << "That was a not so good game. replay?";
        
    }
    
    cout << endl;
    
    cout << "Thanks for playing, "<<Name;
}