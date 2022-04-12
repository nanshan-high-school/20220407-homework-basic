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
  
  int seatNumber = 1, minScore = 101, maxScore = 0;
  vector<int> minPerson = {}, maxPerson = {};
  for (int i: scores) {
    if (i >= maxScore) {
      if (i > maxScore) {
        maxScore = i;
        maxPerson = {};
      }
      maxPerson.push_back(seatNumber);
    }
    if (i <= minScore) {
      if (i < minScore) {
        minScore = i;
        minPerson = {};
      }
      minPerson.push_back(seatNumber);
    }
    seatNumber ++;
  }

  cout << "班級總分為" << totalScore << "分\n";
  cout << "班級總平均為" << (float)totalScore / scores.size() << "分\n";
  for (int i : maxPerson) cout << " " << i ;
  cout << "號為最高分" << maxScore << "分 ; ";
  for (int i : minPerson) cout << " " << i;
  cout << "號為最低分" << minScore << "分";
}
