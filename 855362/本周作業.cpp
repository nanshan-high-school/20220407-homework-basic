/*Asuka sekai dai ichi ! dai suki da !*/
#include <iostream>
#include<vector>

using namespace
std;

int main() {
  vector<int> a;
  int  b = 0 , c = 0 ,min = 101 , max = -1 , all = 0;
  cin >> b ;
  a.push_back(b) ;
  for (int i = 0 ;a[i] != 0 ;i++){
    cin >> c ;
    a.push_back(c) ;
  }
  a.pop_back() ;
  for (int i :a){
    if(i > max){
      max = i;
    }
    if(i < min){
      min = i;
    }
    all += i ;
  }
  cout << all / a.size() <<" "<< max <<" "<<min;
}