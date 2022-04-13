#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector <int> scores;
  vector <int> data;
  int a;
  while(a != 0){
    cin >> a;
    scores . push_back(a);
  }
  int n;
  n = scores . size() - 1;
  int ave , max = -1 , min = 101 , sum = 0;
  for(int i = 0; i < n; i++){
    sum += scores[i];
    if (scores[i] < min){
      min = scores[i];
    }
    if (scores[i] > max){
      max = scores[i];
    }
  }
  ave = sum / n;
  //data . assign (1 , ave );
  data = {ave, max ,min};
  //data[1] = 2;
  //data[2] = 3;
  for( int b : data){
    cout << b << " ";
  }
  
}