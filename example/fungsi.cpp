#include <iostream>

using namespace std;

void tukarValue(int, int);
void tukarReference(int&, int&);
void foo1(int a, int b, int& c);
int foo2(int a, int b);

int main() {
	return 0;
}


void foo1(int a, int b, int& c) {
	c = a + b;
}

int foo2(int a, int b) {
	return a + b;
}

void tukarValue(int x, int y) {
	int z = x;
	x = y;
	y = z;
}

void tukarReference(int& x, int& y) {
	int z = x;
	x = y;
	y = z;
}
