#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//Function game

int gamewin(char comp, char player);
int gamewin(char comp, char player){
    
    if(comp == player){

        cout<<"Game is tie "<<endl; 
        cout<<"You both have chose same";
        return 0;

    }
    if ( comp == 's'){
        if (player == 'w'){
            cout<<"Computer Chose : "<<comp<<endl;
            cout<<"You have Chose : "<<player<<endl;
            cout << " You Lose!";
            
            return 0;

        }
        else if (player == 'g'){
            cout<<"Computer Chose : "<<comp<<endl;
            cout<<"You have Chose : "<<player<<endl;
            cout << " You WON!";
          
            return 3;
        }
        
        }
   
    else if(comp = 'w'){
        if (player=='g'){
            cout<<"Computer Chose : "<<comp<<endl;
            cout<<"You have Chose : "<<player<<endl;
            cout << " You  Lose!";
            
            return 2;

         }
        else if(player == 's'){
            cout<<"Computer Chose : "<<comp<<endl;
            cout<<"You have Chose : "<<player<<endl;
            cout << " You WON! ";
            
            return 1;

        }


    }
    else if(comp = 'g'){
        
         if (player=='s'){
            cout<<"Computer Chose : "<<comp<<endl;
            cout<<"You have Chose : "<<player<<endl;
            cout << " You  Lose!";
            
            return 2;   
         }
        else if(player == 'w'){
            cout<<"Computer Chose : "<<comp<<endl;
            cout<<"You have Chose : "<<player<<endl;
            cout << " You WON! ";
            
            return 3;

          }


    }
return 1;
}


int main(){
    cout << "****************Welcome to Shubharthak's Snake Water Gun Game********************"<<endl;
    char player; 
 //Program to generate random number : 
  srand((unsigned) time(0));
 int randomnumber;
randomnumber = (rand()%3) + 1;
//Program to take input from Player : 

cout<<"Computer's turn : Please Choose Snake(s), Water(w) or Gun(g) : "<<endl;
cout<<"Computer have choosen "<<endl;
char comp;
if (randomnumber== 1)
    comp= 's';
else if (randomnumber ==2)
    comp = 'w';
else if (randomnumber ==3)
    comp ='g';


cout << " Player's turn : Please Choose Snake(s), Water(w) or Gun(g) : ";
cin >> player ;

    if(player == 's' || player == 'g' || player == 'w')
        gamewin(comp, player);

    else {

        cout << " Wrong input ";
}


 return 1 ;



 }



