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

#include "computerplayer.h"

using namespace std;

ComputerPlayer::ComputerPlayer(const std::string coin) : Player(coin){
  this->coin = coin;
}
/* Destructor */
ComputerPlayer::~ComputerPlayer(){
}

int drop_choice(int boardwidth) {
  int column;
  while(column < 0 && column > boardwidth){
    cout << "Please enter a column to play between 1 and " << boardwidth << endl;
    cin >> column;
  }
  return column;
}
std::string ComputerPlayer::coin_getter(){
  return this->coin;
}
