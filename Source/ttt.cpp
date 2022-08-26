#include "ttt_functions.hpp"


int main(){

    srand(time(NULL));

    char player1 = 'X', player2 = 'O', player;
    char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool player_turn = rand() % 2;

    draw(board);
    while(check_winner(board, player1, player2) == false){
        if(player_turn == true){
            player = player1;
        }else{
            player = player2;
        }
        std::cout << "First move to player " << player << "\n";
        user_input(board, player);
        player_turn = !player_turn;
        draw(board);
    }
}