#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> scores = {};

  int score = 111;
  int totalScore = 0;
  cout << "Type 0 to Stop\n";
  while(true) {
    cout << "No." << scores.size() + 1<< " score:";
    cin >> score;
    if(score == 0) break;

    totalScore += score;
    scores.push_back(score);
  }
  
  int max = -1, min = 101;
  for(int value : scores) {
    if(value > max) {
      max = value;
    }
    if(value < min) {
      min = value;
    }
  }

  cout << "\nAverage:" << (float)totalScore / scores.size();
  cout << "\nHighest is "<< max;
  cout << "\nLowest is " << min;
}