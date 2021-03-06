#include "ex14_38.h"
#include <fstream>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char **argv) {
	ifstream file(argv[1]);
	string str;
	checkLength cl(1, 10);
	map<int, int> mii;
	while (file >> str) {
		++mii[cl(str)];
	}
	cout << mii[1] << endl;
	return 0;
}