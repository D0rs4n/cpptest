#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int elso, masodik, harmadik;
	cin >> elso;
	cin >> masodik;
	cin >> harmadik;
    int tomb[] = {elso, masodik, harmadik};
	int n = sizeof(tomb) / sizeof(tomb[0]);
	sort(begin(tomb),end(tomb), greater<int>());
	for(int i= 0; i < size(tomb);i++){
		cout<< tomb[i] << "\n";
	}
    return 0;
}
