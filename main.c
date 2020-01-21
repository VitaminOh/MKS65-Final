#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {
  clearScreen();
  int enter;
  printf("\n\n\n\n\n\n\n\n\n\n\t\tWelcome to battleship. Please hit enter to begin.");
  while (enter != '\r' && enter != '\n') {
    enter = getchar();
  }
  int i,player;
  enter = 0;
  for (i = 1; i < 3; i++){
    clearScreen();
    clearBoard();
    setShips(i);
    display(0);
    clearScreen();
    setPlayerHits(i);
    showPlayerHits(i);
    checkHits(i);
    if (i == 1) {
      printf("\nPress enter for player 2's turn...");
      while (enter != '\r' && enter != '\n') {
        enter = getchar();
      }
    }
  }
  if (getP1Hits() == getP2Hits()){
    printf("\nTIE!\n");
  }
  else if (getP1Hits() > getP2Hits()){
    printf("\nPlayer 1 has has won!\n");
  }
  else {
    printf("\nPlayer 2 has has won!\n");
  }
  printf("Game Finished\n");
  return 0;
}
