#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice_MyVer_forCom(char choice);
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    // showChoice_MyVer_forCom(computer);
    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    
    char player;
    cout << "Rock-Paper-Scissors Game!\n";

    do {
        cout << "Choose one of the following\n";
        cout << "*************************\n";
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissors\n";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    
    return player;

}
char getComputerChoice(){
    
    srand(time(NULL));

    char computer;
    int computer_choice;

    // cout << "\nComputer choosing...\n";

    computer_choice = (rand() % 3) + 1;

    switch (computer_choice){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        default: return ' ';
    }

    // if (computer_choice == 1){
    //     computer = 'r';
    // }
    // else if (computer_choice == 2){
    //     computer = 'p';
    // }
    // else {
    //     computer = 's';
    // }

    // return computer;

}
void showChoice_MyVer_forCom(char choice){

    string move;

    if (choice == 'r'){
        move = "Rock";
    }
    else if (choice == 'p'){
        move = "Paper";
    }
    else {
        move = "Scissors";
    }

    cout << "Computer choose " << move << endl;
}
void showChoice(char choice){
    
    switch(choice){
        case 'r': cout << "Rock\n";
                  break;
        case 'p': cout << "Paper\n";
                  break;
        case 's': cout << "Scissors\n";
                  break;
    }

}
void chooseWinner(char player, char computer){

    if (player == computer){
        cout << "It's a TIE!\n";
    }
    else if (player == 'r' && computer == 's', 
             player == 'p' && computer == 'r', 
             player == 's' && computer == 'p'){
                cout << "You win!\n";
             }
    else {
        cout << "You lose!\n";
    }

    // switch (player){
    //     case 'r': if (computer == 'r'){
    //                 cout << "It's a tie!\n";
    //               }
    //               else if (computer == 'p'){
    //                 cout << "You lose!\n";
    //               }
    //               else {
    //                 cout << "You win!\n";
    //               }
    //               break;
    //     case 'p': if (computer == 'p'){
    //                 cout << "It's a tie!\n";
    //               }
    //               else if (computer == 's'){
    //                 cout << "You lose!\n";
    //               }
    //               else {
    //                 cout << "You win!\n";
    //               }
    //               break;
    //     case 's': if (computer == 's'){
    //                 cout << "It's a tie!\n";
    //               }
    //               else if (computer == 'r'){
    //                 cout << "You lose!\n";
    //               }
    //               else {
    //                 cout << "You win!\n";
    //               }
    //               break;
    // }

}