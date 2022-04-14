#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector <int> students;
  int S, sum = 0, max = -1, min = 100;
  while(true){
    cin >> S;
    if (S == 0){
      break;
    }
    students.push_back(S);
    sum += S;

    if (S > max){
      max = S;
    }
    if (S < min){
      min =S ;
    }
  }
  cout << sum/students.size() << " " << max << " " << min;
}