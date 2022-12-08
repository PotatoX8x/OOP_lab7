#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;

class ATM {
	string ID;
	int min_withdraw;
	int max_withdraw;
	map<int, int> cash_info;
public:
	ATM();
	~ATM(){}

	void fillATM(map<int, int>);
	int getMoneySum();
	void insertMoney();
	void withdrawMoney();
	void printInfo();
};