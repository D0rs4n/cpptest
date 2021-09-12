#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i;
	int szum = 0;
	for(i = 0; i < n; i++){
		int be;
		cin >> be;
		szum += be;
	}
	cout << szum;
    return 0;
}
