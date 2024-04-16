#include <iostream>
#include <string>

char a = 'n';
char aaa[10];
std::string aa = "ini adalah string";

struct mobil {
	int hp;
	long harga;
};

union motor {
	long harga;
	std::string merk;
};


enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU };

int main() {
	int x = 5;

	if (x == 5) { std::cout << "x adalah 5"; }
	else { std::cout << "x bukan 5"; }

	x == 5 ? std::cout << "x adalah 5" : std::cout << "x bukan 5";


	return 0;
}