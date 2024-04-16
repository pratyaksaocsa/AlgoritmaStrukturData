#include <iostream>

using namespace std;

int main() {
	//int x[6] = {2,4,6,8,10,12};
	/*x[0] = 2;
	x[1] = 4;
	x[2] = 6;
	x[3] = 8;
	x[4] = 10;
	x[5] = 12;*/
	
	//for (int i = 0; i < 6; i++) {
	//	cout << x[i] << endl;
	//}

	//cout << x[0] << endl;
	//...


	//int var = 10;
	//cout << "Nilai var = " << var << endl;
	//cout << "Alamat var = " << &var << endl;
	//int* ptr1 = &var;
	//cout << "Nilai ptr 1 = " << ptr1 << endl;
	//cout << "Alamat ptr 1 = " << &ptr1 << endl;
	//cout << "Nilai yang ditunjuk ptr 1 = " << *ptr1 << endl; //10

	//var = 30;
	//cout << "Nilai yang ditunjuk ptr 1 = " << *ptr1 << endl; //???


	struct node {
		int data;
		node* next;
	};

	node* HEAD = new node;
	HEAD->data = 2;
	HEAD->next = NULL;

	node* B = new node;
	B->data = 5;
	B->next = NULL;
	HEAD->next = B;

	node* C = new node;
	C->data = 7;
	C->next = NULL;
	B->next = C;

	cout << HEAD->data << endl;
	cout << HEAD->next->data << endl;
	cout << HEAD->next->next->data << endl;

	return 0;
}