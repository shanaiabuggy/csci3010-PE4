#include <iostream>

char * CreateBoard() {
  char *ptr;
  char board[3][3] = {{'_'}};
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

struct Point {
  Point(int xVal, int yVal) {
    x = xVal;
    y = yVal;
  }
  int x;
  int y;
};


Point GetPlayerChoice() {
  std::cout << "Enter a row (0-2):" << std::endl;
  int x;
  std::cin >> x;
  int y;
  std::cout << "Enter a col (0-2):" << std::endl;
  std::cin >> y;

  return Point(x, y);
}


void PlaceMarker(Point p, char * board, char player) {
  board[p.x*3 + p.y] = player;
}
/*
std::pair<int,int> GetPlayerChoice() {
  std::pair<int,int> location;
  int row;
  int col;
  std::cout << "Enter the row of your move: ";
  std::cin >> row;
  std::cout << "Enter the column of your move: ";
  std::cin >> col;
  return std::make_pair(row, col);
}*/

int main(){
  char *b;
  Point p = Point(0,0);
  b = CreateBoard();
  for (int i = 0; i < 9; i++){
    // for X
    std::cout<< "Player X turn" << std::endl;
    DisplayBoard(b);
    p = GetPlayerChoice();
    PlaceMarker(p, b, 'X');
    // for O
    std::cout<< "Player O turn" << std::endl;
    DisplayBoard(b);
    p = GetPlayerChoice();
    PlaceMarker(p, b, 'O');
  }
  return 0;
}
