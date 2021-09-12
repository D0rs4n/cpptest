#include <iostream>
#include <algorithm>
using namespace std;

static int LNKO(int x,int y) {
	if (y == 0){
		return x;
	}
	int r = x % y;
	return LNKO(y, r);
}

int main() {
    return 0;
}
