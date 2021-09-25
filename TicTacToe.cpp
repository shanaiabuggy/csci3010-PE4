#include <iostream>

char** CreateBoard() {
  char** board = new char*[3];
  for(int i = 0; i < 3; i++){
    board[i] = new char[3];
    for(int j = 0; j < 3; j++){
      board[i][j] = '_';
    }
  }
  return board;
}

void DisplayBoard(char** board) {
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      std::cout << board[i][j] << " ";
    }
    std::cout << std::endl;
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


void PlaceMarker(Point p, char** board, char player) {
  board[p.x][p.y] = player;
}

int main(){
  char** board = CreateBoard();
  Point p = Point(0,0);
  //b = CreateBoard();

  for (int i = 0; i < 4; i++){
    // for X
    DisplayBoard(board);
    std::cout<< "Player X turn" << std::endl;
    p = GetPlayerChoice();
    PlaceMarker(p, board, 'X');
    // for O
    DisplayBoard(board);
    std::cout<< "Player O turn" << std::endl;
    p = GetPlayerChoice();
    PlaceMarker(p, board, 'O');
  }
  // for X
  DisplayBoard(board);
  std::cout<< "Player X turn" << std::endl;
  p = GetPlayerChoice();
  PlaceMarker(p, board, 'X');
  DisplayBoard(board);
  std::cout << "Game over!" << std::endl;
  return 0;
}
