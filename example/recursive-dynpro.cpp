#include <iostream>

long long fibo(int n) {
	/** Recursive Example
	if (n <= 1) {
		return 1;
	} else {
		return fibo(n-1) + fibo(n-2);
	} **/
	
	/* Dynamic Programming */
	long long *f = new long long[n+1]; //int f[n+1];
	for (int i = 0; i <= n; i++) {
		if (i <= 1) { f[i] = 1; }
		else {
			f[i] = f[i - 1] + f[i - 2];
		}
	}
	long long ret = f[n];
	delete[] f;
	return ret;
}

int fact(int n) {
	if (n == 2) {
		return n;
	} else {
		return n * fact(n - 1);

		//5 * fact(4) -> 4 * fact(3) -> 3 * fact(2)
		// 5 * 4 * 3 * fact(2)
	}
}

int pangkat(int x, int y) {
	if (y == 0) {
		return 1;
	} else {
		return x * pangkat(x, y - 1);
	}
}

int main() {
	std::cout << fibo(100);
	return 0;
}