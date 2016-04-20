/*************************
 *         0000          *
 *      fearGewinnt      *
 *         Game          *
 *          by           *
 *    Thomas RAUHOFER    *
 *        if15b029       *
 *          and          *
 *     Tobias WATZEK     *
 *        if15b038       *
 *************************/
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

#include "humanplayer.h"
/* Constructor */
HumanPlayer::HumanPlayer(const std::string &coin){
  this->coin = coin;
}
/* Destructor */
HumanPlayer::~HumanPlayer(){
}

int HumanPlayer::human_drop(int boardwidth) {
  int column;
  while(column < 0 && column > boardwidth){
    cout << "Please enter a column to play between 1 and " << boardwidth << endl;
    cin >> column;
  }
  return column;
}
std::string HumanPlayer::coin_getter(){
  return this->coin;
}
