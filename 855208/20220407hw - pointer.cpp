#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int* scores;
  int length = 0;
  int totalScore = 0;

  int score;
  cout << "Type 0 to Stop\n";
  while (true) {
    cout << "No." << length + 1 << " score:";
    cin >> score;
    if (score == 0) break;

    int* temp = scores;
    scores = new int[length + 1];
    memcpy(scores, temp, sizeof(int) * length);
    scores[length++] = score;

    totalScore += score;
  }

  int max = -1, min = 101;
  for(int i = 0; i < length; i++) {
    if(scores[i] > max) max = scores[i];
    if(scores[i] < min) min = scores[i];
  }
  cout << "\nAverage:" << (float)totalScore / length;
  cout << "\nHighest is " << max;
  cout << "\nLowest is " << min;
}
