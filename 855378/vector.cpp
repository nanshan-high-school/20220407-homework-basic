#include <iostream>
#include<vector>
using namespace std;
int main() {
  int score = -1, max = 0, min = 100,sum = 0;
  vector <int> num = {};
  cin >> score;
  while (score != 0) {
    num.push_back(score);
    cin >> score;
  }
  for(auto i: num) {
    sum += i;
    if (i > max) {
      max = i;
    }
    if (i < min) {
      min = i;
    }
  }
  cout << "average:" << (sum/num.size()) << "\n";
  cout << "max:" << max << "\n";
  cout << "min:" << min;
  
  
}