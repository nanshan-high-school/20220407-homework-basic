#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> scores;
    int each = 87 , total = 0;

    cout << "type 0 to stop" << endl;
    while(each != 0){
        cout << scores.size() + 1 << " : score : "  ;
        cin >> each;

        scores.push_back(each);
        total += each;

        if(each == 0){
            scores.pop_back();
        }
    }

    int highest = -1 , lowest = 101;
    for(int i = 0 ; i < scores.size() ; i++){
        if(scores[i] > highest){
            highest = scores[i];
        }
        if(scores[i] < lowest){
            lowest = scores[i];
        }
    }
    cout << "highest score : " << highest << endl;
    cout << "lowest score : " << lowest << endl;
    cout << "avg : " << total / scores.size() << endl;
}