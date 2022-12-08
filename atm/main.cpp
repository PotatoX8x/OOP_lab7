#include "ATM.h"

int main() {
	ATM A;
	map<int, int> money = { {10, 50}, {20, 50}, {50, 50}, {100, 200}, {200, 200}, {500, 100}, {1000, 50} };
	A.fillATM(money);
	//A.printInfo();
	//cout << "Money sum: " << A.getMoneySum();
	//A.insertMoney();
	//A.printInfo();
	//A.getMoneySum();
	A.withdrawMoney();
	return 0;
}