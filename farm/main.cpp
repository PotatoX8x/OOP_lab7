#include "Farm.h"

void print_map(map<int, string>);

int main() {
	try {
		map<int, string> crop_list = { {1, "Wheat"}, {2, "Sun flower"}, {3, "Rice"}, {4, "Corn"}, {5, "Potato"}, {6, "Beet"} };
		cout << "All crops: " << endl;
		print_map(crop_list);
		cout << endl;

		Farm A;
		A.addItem(crop_list, 1);
		A.addItem(crop_list, 4);
		cout << "A = ";
		A.printInfo();

		Farm B;
		B.addItem(crop_list, 1);
		B.addItem(crop_list, 2);
		B.addItem(crop_list, 3);
		cout << "B = ";
		B.printInfo();

		Farm C;
		C.addItem(crop_list, 1);
		C.addItem(crop_list, 4);
		C.addItem(crop_list, 5);
		C.addItem(crop_list, 3);
		cout << "C = ";
		C.printInfo();

		statistics(A, B, C, crop_list);
	}
	catch (const char* x) {
		cerr << x << endl;
	}
	return 0;
}