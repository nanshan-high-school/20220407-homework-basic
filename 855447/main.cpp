#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
vector <int> score {};
int sc , std = 0 , t = 0;
	
while (true){
	cin >> sc;
	t += sc;
	if (sc == 0){
		break;
	}
	else{
		score.push_back(sc);
		}
	}
	sort(score.begin(), score.end());
  int n;
  n = score.size();
	cout << t/score.size() << " " << score[n-1] << " " << score[0] ;
	}