#include "Farm.h"

void print_map(map<int, string> A) {
	for (const auto& n : A)
		cout << "[" << n.first << "] = " << n.second << "; ";
	cout << endl;
}

void Farm::printInfo() {
	if (crops.empty()) {
		throw "List is empty.";
	}
	for (const auto& n : crops)
		cout << "[" << n.first << "] = " << n.second << "; ";
	cout << endl;
}

void Farm::addItem(map<int, string> crop_list, int key) {
	if (crop_list.find(key) != crop_list.end()) {
		crops.insert({ key, crop_list[key]});
	}
	else {
		throw "Key not found.";
	}
}

void statistics(Farm A, Farm B, Farm C, map<int, string> crop_list) {
	cout << endl << "--Farm Statistics--" << endl;
	map<int, string>::iterator it = crop_list.begin();
	map<int, string> contains_one;
	map<int, string> contains_all;
	map<int, string> contains_two;
	while (it != crop_list.end()) {
		if (A.crops.find(it->first) != A.crops.end() && B.crops.find(it->first) != B.crops.end() && C.crops.find(it->first) != C.crops.end()) {
			contains_all.insert(*it);
		}
		else if ((A.crops.find(it->first) != A.crops.end() && B.crops.find(it->first) != B.crops.end() && C.crops.find(it->first) == C.crops.end()) || (A.crops.find(it->first) != A.crops.end() && B.crops.find(it->first) == B.crops.end() && C.crops.find(it->first) != C.crops.end()) || (A.crops.find(it->first) == A.crops.end() && B.crops.find(it->first) != B.crops.end() && C.crops.find(it->first) != C.crops.end())) {

			contains_two.insert(*it);
		}
		else if (A.crops.find(it->first) != A.crops.end() || B.crops.find(it->first) != B.crops.end() || C.crops.find(it->first) != C.crops.end()) {
			contains_one.insert(*it);
		}
		++it;
	}
	cout << "Crops that grow on all 3 farms: ";
	print_map(contains_all);
	cout << endl << "Crops that grow on 2 out of 3 farms: ";
	print_map(contains_two);
	cout << endl << "Crops that grow on at least one of 3 farms: ";
	print_map(contains_one);
}