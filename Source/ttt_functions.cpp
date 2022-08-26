#include "ttt_functions.hpp"

// Drawing board
void draw(char board[]){
    std::string column = "     |     |     \n";
    std::string row = "_____|_____|_____\n";
    std::cout << column;
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
    std::cout << row;
    std::cout << column;
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
    std::cout << row;
    std::cout << column;
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
    std::cout << column;
    std::cout << "You will pick a number to place your char.\n";
}

// Taking user input
int user_input(char board[], char player){
    int number, false_sum = 0;
    bool possible = true;
    while(possible == true){
        std::cout << "Choose number: ";
        std::cin >> number;
        if(isdigit(board[number-1])){
            board[number-1] = player;
            possible = false;
        }else{
            std::cout << "You can't place there !!!\n";
        }
    }
    return number;
}

bool check_winner(char board[], char player1, char player2){
    bool tie = true;
    // Player 1
    // Checking rows
    if(board[0] == player1 && board[1] == player1 && board[2] == player1){
        std::cout << "Player1 " << player1 << " won !!!!\n";
        return true;
    }
        else if(board[3] == player1 && board[4] == player1 && board[5] == player1){
            std::cout << "Player1 " << player1 << " won !!!!\n";
            return true;
        }

        else if(board[6] == player1 && board[7] == player1 && board[8] == player1){
            std::cout << "Player1 " << player1 << " won !!!!\n";
            return true;
        }
    
    // Checking columns
    if(board[0] == player1 && board[3] == player1 && board[6] == player1){
        std::cout << "Player1 " << player1 << " won !!!!\n";
        return true;
    }
        else if(board[1] == player1 && board[4] == player1 && board[7] == player1){
            std::cout << "Player1 " << player1 << " won !!!!\n";
            return true;
        }

        else if(board[2] == player1 && board[5] == player1 && board[8] == player1){
            std::cout << "Player1 " << player1 << " won !!!!\n";
            return true;
        }

    // Checking corss
    if(board[0] == player1 && board[4] == player1 && board[8] == player1){
        std::cout << "Player1 " << player1 << " won !!!!\n";
        return true;
    }
        else if(board[2] == player1 && board[4] == player1 && board[6] == player1){
            std::cout << "Player1 " << player1 << " won !!!!\n";
            return true;
        }
    
    // Player 2
    // Checking rows
    if(board[0] == player2 && board[1] == player2 && board[2] == player2){
        std::cout << "player2 " << player2 << " won !!!!\n";
        return true;
    }
        else if(board[3] == player2 && board[4] == player2 && board[5] == player2){
            std::cout << "player2 " << player2 << " won !!!!\n";
            return true;
        }

        else if(board[6] == player2 && board[7] == player2 && board[8] == player2){
            std::cout << "player2 " << player2 << " won !!!!\n";
            return true;
        }
    
    // Checking columns
    if(board[0] == player2 && board[3] == player2 && board[6] == player2){
        std::cout << "player2 " << player2 << " won !!!!\n";
        return true;
    }
        else if(board[1] == player2 && board[4] == player2 && board[7] == player2){
            std::cout << "player2 " << player2 << " won !!!!\n";
            return true;
        }

        else if(board[2] == player2 && board[5] == player2 && board[8] == player2){
            std::cout << "player2 " << player2 << " won !!!!\n";
            return true;
        }

    // Checking corss
    if(board[0] == player2 && board[4] == player2 && board[8] == player2){
        std::cout << "player2 " << player2 << " won !!!!\n";
        return true;
    }
        else if(board[2] == player2 && board[4] == player2 && board[6] == player2){
            std::cout << "player2 " << player2 << " won !!!!\n";
            return true;
        }
    
    for(int i = 0; i < 10; i++){
        if(isdigit(board[i]) == true){
            tie = false;
        }
    }

    if(tie == true){
        std::cout << "It's a TIE !!!\n";
        tie = false;
    }
}

