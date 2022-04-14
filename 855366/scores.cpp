#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> scores{};
	int i = 1;

	while (i != 0) {
		cin >> i;

		if (i != 0) {
			scores.push_back(i);
		}
	}

	int min = 101;
	int max = -1;
	float sum = 0;

	for (int score : scores) {
		if (score > max) {
			max = score;
		}

		if (score < min) {
			min = score;
		}

		sum += score;
	}

	cout << sum / scores.size() << " " << max << " " << min;
}
                                          