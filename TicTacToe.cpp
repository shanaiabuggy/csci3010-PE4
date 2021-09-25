#include <iostream>

int * CreateBoard() {
  int *ptr;
  int board[3][3];
  ptr =  &board[3][3];
  return ptr;
}

void DisplayBoard(int *b){
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      std::cout << b[(i*3)+j];
    }
    std::cout<<std::endl;
  }
}

int main(){
  int *b;
  b = CreateBoard();
  DisplayBoard(b);
  return 0;
}
