#include <iostream>
#include <vector>

std::vector<int> scores;
int score = -1, total = 0;
int max = -1, min = 101;


int main() {
  while(score != 0) {
    std::cin >> score;
    
    if (score != 0)
      scores.push_back(score);
  }
  
  for (int s : scores) {
    if (s > max) max = s;
    if (s < min) min = s;
    total += s;
  }

  std::cout << total / scores.size() << " " << max << " " << min;
}