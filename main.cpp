#include<iostream>
using namespace std;

int main() {
	int N = 10;
	for (int i = 0; i <= N; i++) {
		cout << endl;
		cout << "i = " << i;
		cout << endl;
		for (int j = 0; j <= i; j++) {
			cout << j << " ";
		}
	}
	return 0;
}