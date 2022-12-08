#pragma once
#include <map>
#include <iostream>
#include <string>

using namespace std;

class Farm {
	map<int, string> crops;
public:
	Farm(){}
	~Farm() {}

	friend void print_map(map<int, string>);
	void printInfo();
	void addItem(map<int, string>, int);
	friend void statistics(Farm, Farm, Farm, map<int, string>);
};