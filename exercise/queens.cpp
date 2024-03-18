#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

vector<vector<string>> ret;

void showBoard(vector<string> &board) {
  for (auto row : board) {
    std::cout << row << std::endl;
  }
}

void showRes(vector<vector<string>> &res) {
  for (auto ele : res) {
    showBoard(ele);
  }
}

bool is_valid(vector<string> &board, int row, int col) {
  // check col
  for (int i = row; i >= 0; --i) {
    if (board[i][col] == 'Q')
      return false;
  }
  // check left diagonal
  for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
    if (board[i][j] == 'Q')
      return false;
  }
  // check right diagonal
  for (int i = row, j = col; i >= 0 && j < board.size(); --i, ++j) {
    if (board[i][j] == 'Q')
      return false;
  }
  return true;
}

void dfs(vector<string> &board, int row) {
  if (row == board.size()) {
    ret.push_back(board);
    return;
  }

  for (int i = 0; i < board.size(); ++i) {
    if (is_valid(board, row, i)) {
      board[row][i] = 'Q';
      dfs(board, row + 1);
      // if failed, reset and test next col
      board[row][i] = '.';
    }
  }
}

int main() {
  int n;
  std::cin >> n;
  vector<string> board(n, string(n, '.'));
  dfs(board, 0);
  showRes(ret);
}