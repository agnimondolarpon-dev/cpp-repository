// Rock paper scissor game 
// author: Agni Mondol Arpon 
#include<iostream>
#include <ctime>
using namespace std;

char getuserchoice();
char getcomputerchoice();
void showChoice( char choice);
void choosewinner(char player, char computer);

int main() {

    char player;
    char computer;

    //player
    player = getuserchoice();
    cout << "Your choice :";
    showChoice(player);

    //computer
    computer = getcomputerchoice();
    cout << "Computer choice :" ;
    showChoice(computer);

    //winner
    choosewinner(player, computer);

    return 0;
}

char getuserchoice() {

    char player;

    cout << "Rack Paper Scissor Game ! \n" ;

    cout << "\n" ;

    do {

        cout << "*************************\n";

        cout << "\n" ;

        cout << "Choice on of the following\n";

        cout << "\n" ;

        cout << "'r' for Rock\n";
        cout << "'p' for Paper\n";
        cout << "'s' for Scissor\n";

        cout << "\n" ;

        cout << "Choice once :" ;
        cin >> player;

        cout << "\n" ;

    } while ( player != 'r' && player != 'p' && player != 's' ) ;

    return player;
}

char getcomputerchoice() {

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num) {

    case 1 :
        return 'r' ;

    case 2 :
        return 'p' ;

    case 3 :
        return 's' ;
    }

    return 0;
}

void showChoice( char choice) {

    switch(choice) {

    case 'r' :
        cout << "Rock\n";
        break;

    case 'p' :
        cout << "Paper\n";
        break;

    case 's' :
        cout << "Scissor\n";
        break;

    }

}

void choosewinner(char player, char computer) {

    switch(player) {

    case 'r' :
        if (computer == 'r' ) {
            cout << "It's a tie !\n" ;
        }
        else if (computer == 'p') {
            cout << "You lose.\n" ;
        }
        else {
            cout << "You win !\n" ;
        }
        break ;

    case 'p' :
        if (computer == 'p' ) {
            cout << "It's a tie !\n" ;
        }
        else if (computer == 's') {
            cout << "You lose.\n" ;
        }
        else {
            cout << "You win !\n" ;
        }
        break ;

    case 's' :
        if (computer == 's' ) {
            cout << "It's a tie !\n" ;
        }
        else if (computer == 'r') {
            cout << "You lose.\n" ;
        }
        else {
            cout << "You win !\n" ;
        }
        break ;
    }
}

// end code
