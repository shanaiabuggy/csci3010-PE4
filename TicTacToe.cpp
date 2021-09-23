#include <iostream>

int * CreateBoard() {
  int *ptr;
  int board[3][3];
  ptr =  &board[3][3];
  return ptr;
}

int main(){
  int *b;
  b = CreateBoard();

  return 0;
}
