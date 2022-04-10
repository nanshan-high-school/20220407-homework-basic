#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> scores = {};

  int score = -1, totalScore;
  while(score != 0) {
    cout << "請請輸入" << scores.size() + 1 << "的成績(輸入0結束):";
    cin >> score;
    scores.push_back(score);
    totalScore += score;
  }
  scores.pop_back();
  
  int seatNumber = 1, minScore = 101, minPerson = 0, maxScore = 0, maxPerson = 0; 
  for (int i: scores) {
    if (i > maxScore) {
      maxScore = i;
      maxPerson = seatNumber;
    }
    if (i < minScore) {
      minScore = i;
      minPerson = seatNumber;
    }
    seatNumber ++;
  }

  cout << "班級總分為" << totalScore << "分\n";
  cout << "班級總平均為" << (float)totalScore / scores.size() << "分\n";
  cout << maxPerson << "號為最高分" << maxScore << "分 ; ";
  cout << minPerson << "號為最低分" << minScore << "分";
}
