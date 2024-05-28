#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream is("infile.txt");
	ofstream os("outfile.txt");

	string read;
	while (getline(is, read)) {
		cout << read;
	}

	is.close();
	os.close();
	return 0;
}