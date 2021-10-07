//
// Created by luax2 on 06/10/2021.
//

#ifndef GATOARCHIVOS_GATO_H
#define GATOARCHIVOS_GATO_H
typedef struct GameState Game;
void displayBoard(Game *g);

Game* newGame();

char getWinner(Game *g);
char getCurrentPlayer(Game *g);
void makeMove(Game *g, int place );
void switchPlayer(Game *g);

Game* loadGame(Game *g);
void saveGame(Game *g,int place);


#endif //GATOARCHIVOS_GATO_H
