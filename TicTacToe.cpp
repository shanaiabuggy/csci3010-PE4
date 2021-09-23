#include <iostream>

int * CreateBoard() {
  int *ptr;
  int board[3][3];
  ptr =  &board[3][3];
  return ptr;
}

void DisplayBoard(int * board) {
  for(int i = 0; i < 3; i++) {
    std::string line = "";
    line += std::to_string(board[i*3]) + " ";
    line += std::to_string(board[i*3 + 1]) + " ";
    line += std::to_string(board[i*3 + 2]);
    std::cout << line << std::endl;
  }
}

int main(){
  int *b;
  b = CreateBoard();
  DisplayBoard(b);
  return 0;
}
