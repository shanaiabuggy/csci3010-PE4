#include <iostream>

char * CreateBoard() {
  char *ptr;
  char board[3][3];
  ptr =  &board[3][3];
  return ptr;
}

void DisplayBoard(char * board) {
  for(int i = 0; i < 3; i++) {
    std::string line = "";
    line += std::to_string(board[i*3]) + " ";
    line += std::to_string(board[i*3 + 1]) + " ";
    line += std::to_string(board[i*3 + 2]);
    std::cout << line << std::endl;
  }
}

std::pair<int,int> GetPlayerChoice() {
  std::pair<int,int> location;
  int row;
  int col;
  std::cout << "Enter the row of your move: ";
  std::cin >> row;
  std::cout << "Enter the column of your move: ";
  std::cin >> col;
  return std::make_pair(row, col);
}

int main(){
  char *b;
  b = CreateBoard();
  DisplayBoard(b);
  std::pair move = GetPlayerChoice();
  return 0;
}
