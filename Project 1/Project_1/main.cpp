/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on December 6, 2016, 2:39 PM
 */

#include <iostream> //I/O
#include <cstdlib>  //Rand and Set Random
#include <ctime>    //Utilize time to set the seed
#include <iomanip>  //Formatting output
#include <cstring>  //strcat
#include <string>   //names
#include <fstream>

#include "Cards.h"


using namespace std;

template <class T>
T option(T);

int main(int argc, char** argv) {
    int choice2=0;                  //used to make the choice transfer to the class function
    bool isDone = false;            //determines when game is done
    string intro;                   //intro holder
    char *intrArr;                  //binary file for intro
    fstream introPr;                //declares prologue file
    char line[1200];                //binary places into this file            
    
    
    
    int choice=option(choice2);     //gets choice of difficulty
        
    Cards card(choice);             //instantiates card to play with
    
    

    
    
    card.Intro();                   //get name and cheater options
        //gives the introduction
    intro=  "This game is called the Card Matching Game. \n\n"
            "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            
            "~~~~~~~~~~~~\n\n"
            
            "The goal of the game is to eliminate all the cards"
                    " you see below.\n"
            
            " All of which have one number underneath \n"
            
            "them from 1-13. These cards contain two of each number from 1-13.\n"
            
            "You eliminate these cards by first picking two of the 26 cards on\n"
            
            "the screen, one at a time. Then, I will flip them over, and tell\n"
            
            "you what number is underneath them. If these two cards match, "
            "then\n"
            
            "they are eliminated from the game, this will be indicated out loud,\n"
            
            "and I will draw an X on the card. If these cards do not match,"
            " then\n"
            
            "they will simply be placed back as they were before I flipped "
            "them.\n"
            
            "The game is over when all cards are eliminated,(when all cards "
            "have\n"
            
            "X's on top of them).\n\n"
            
            
            "NOTE: To get the full experience of this game, do not scroll up to\n"
            
            "see what I said a card was on a previous turn, "
            
            "this game is based on memory.\n\n"
             
            "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
                    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"
            "           GAME START!\n"
            "___________________________________\n";
                
    cout<<intro;
    

    

    // creates deck of cards
    card.Shuffle();
    
    
    do{
        
        card++;                         //operator overload counts turns

        card.Display();                 //displays cards

        card.Turn();                    //displays turns

        card.Pick();                    //receives input of card picks from user


        try{                            //error check/exception here
            isDone=card.ElimCheck(isDone);
        }
        catch(string error){
            cout <<error;               //outputs exception message
        }
    }while(!isDone);                //finishes the program if all cards are eliminated
    
    
    card.Score();                   //gives you the score of your game
    
    delete [] intrArr;              //deletes character array for intro
    
    return 0;
}
template <class T>
T option(T choice){
    
    cout << "would you like to play in: "<<endl;
    cout << "easy mode, (enter 1)"<<endl;
    cout << "normal mode, (enter 2)"<<endl;
    cout << "or hard mode? (enter 3)"<<endl;
    
    cin >>choice;

    
    while(choice>3 || choice<1){
        
        cout <<"please enter a value from 1 - 3"<<endl<<endl;
        cin >> choice;
  
    }
    
    if (choice==1){choice=20;}
    if (choice==2){choice=30;}
    if (choice==3){choice=40;}
    

    
    return choice;
    
}