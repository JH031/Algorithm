#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr[26] = { 0, };
	string s;
	cin >> s;

	for (int i = 0; i < 26; i++) {
		if (s.find('a'+i) == string::npos) {
			arr[i] = -1;
		}
		else {
			arr[i] = s.find('a' + i);
		}
	}
	for (int i = 0; i < 26; i++) cout << arr[i] << ' ';
}