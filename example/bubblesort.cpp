#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector<int> data = { 3,6,2,5,1,8,4 };
	//sort(data.begin(), data.end());
	//int length = sizeof(data) / sizeof(int); //kalau pakai array
	for (int i = 0; i < data.size(); i++) {
		for (int j = i+1; j < data.size(); j++) {
			if (data[i] > data[j]) {
				int temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
	return 0;
}