#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
#include<windows.h>
using namespace std;


enum Color{RED,GREEN,BLUE,YELLOW,PURPLE};

Color generateRandomColor(){
       int randomNum = rand()%5;
       return static_cast<Color>(randomNum);
}

string colorTOString(Color color){
       switch (color)
       {
       case RED:
             return "Red";
              break;
       case GREEN:
             return "Green";
              break;
       case BLUE:
             return "Blue";
              break;
       case YELLOW:
             return "Yellow";
              break; 
       case PURPLE:
             return "Purple";
              break;             
       default:
             return "Unknown";
              break;
       }
}

int main(){
    srand(time(0));

    Color targetcolor = generateRandomColor();

    string guess;
    while (true)
    {
       system("cls");
       cout<<"***********************************************"<<endl;
       cout<<"Welcome to the --COLORED SQUARE GAME !--"<<endl;
       cout<<"***********************************************"<<endl;
       cout<<"Guess the color of the square (RED,GREEN,BLUE,YELLOW,PURPLE)."<<endl;
       cout<<"Enter Your Guessed Color ::"<<endl;
       cin>>guess;

       for (int i = 0; i < guess.length(); ++i)
       {
         guess[i]=tolower(guess[i]);
       }
       
       if(guess=="red" || guess=="green" ||guess=="blue" ||guess=="yellow" ||guess=="purple" ){
              Color usercolor;
              if (guess=="red")
              usercolor=RED;

              else if(guess=="green")
              usercolor=GREEN;

              else if(guess=="blue")
              usercolor=BLUE;

              else if(guess=="yellow")
              usercolor=YELLOW;

              else if(guess=="purple")
              usercolor=PURPLE;

              if (usercolor==targetcolor)
              {
                     cout<<endl;
                     cout<<"Congratulations !! You guessed the correct color ."<<endl;
                     break;
              }
              else{
                     cout<<"Wrong guess . Try again !"<<endl;
              }
       }
     
     else{
       cout<<"Invalid color Please enter the correct color ."<<endl;
     }
     Sleep(1000);
    }
    
       return 0;
}