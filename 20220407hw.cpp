#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> scores;
    int i = 0;
    int inputs = 1;
    while (inputs != 0) {
        cin >> inputs;
        scores.push_back(inputs);
        i++;
    }
    scores.pop_back();
    int max = 0;
    int min = 100;
    int sum = 0;
    for (int score : scores) {
        sum += score;
        if (score > max) {
            max = score;
        }
        if (score < min) {
            min = score;
        }
    }
    int size = scores.size();
    cout << sum / size << " " << max << " " << min;
}
