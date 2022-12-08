#include "ATM.h"

//void print_map(unordered_map<string, int> A) {
//	for (const auto& n : A)
//		cout << "[" << n.first << "] = " << n.second << "; ";
//	cout << endl;
//}

ATM::ATM() {
	ID = "000000";
	min_withdraw = 200;
	max_withdraw = 1000;
	cash_info = { {10, 0}, {20, 0}, {50, 0}, {100, 0}, {200, 0}, {500, 0}, {1000, 0} };
}

void ATM::fillATM(map<int, int> money) {
	cash_info = money;
}

int ATM::getMoneySum() {
	int sum = 0;
	for (const auto& n : cash_info) {
		sum += n.first * n.second;
	}
	return sum;
}

void ATM::insertMoney() {
	int sum = 0;
	int choice = -1;
	while (choice != 0) {
		cout << "--Insert your money | Inserted: "<<sum<<" UAH--" << endl << endl;
		cout << "1 - 10 UAH" << endl;
		cout << "2 - 20 UAH" << endl;
		cout << "3 - 50 UAH" << endl;
		cout << "4 - 100 UAH" << endl;
		cout << "5 - 200 UAH" << endl;
		cout << "6 - 500 UAH" << endl;
		cout << "7 - 1000 UAH" << endl;
		cout << "0 - finish" << endl << endl;
		cout << "Your choice: ";
		try {
			cin >> choice;
			switch (choice) {
			case 1: {
				sum += 10;
				cash_info[10] += 1;
				system("pause");
				system("cls");
				break;
			}
			case 2: {
				sum += 20;
				cash_info[20] += 1;
				system("pause");
				system("cls");
				break;
			}
			case 3: {
				sum += 50;
				cash_info[50] += 1;
				system("pause");
				system("cls");
				break;
			}
			case 4: {
				sum += 100;
				cash_info[100] += 1;
				system("pause");
				system("cls");
				break;
			}
			case 5: {
				sum += 200;
				cash_info[200] += 1;
				system("pause");
				system("cls");
				break;
			}
			case 6: {
				sum += 500;
				cash_info[500] += 1;
				system("pause");
				system("cls");
				break;
			}
			case 7: {
				sum += 1000;
				cash_info[1000] += 1;
				system("pause");
				system("cls");
				break;
			}
			case 0: {
				if (sum != 0) {
					cout << "Money inserted: " << sum << " UAH" << endl;
				}
				else {
					cout << "Operation canceled" << endl;
				}
				system("pause");
				system("cls");
				return;
			}
			default: {
				throw "Invalid choice.";
			}
			}
		}
		catch (const char* x) {
			cerr << x << endl << endl;
			system("pause");
			system("cls");
		}
	}
}

void ATM::withdrawMoney() {
	int withdraw = 0;
	while (withdraw < min_withdraw || withdraw > max_withdraw) {
		cout << "Enter sum to withdraw: ";
		cin >> withdraw;
		if (withdraw < min_withdraw || withdraw > max_withdraw) {
			cout << "Enter correct value" << endl;
		}
		system("pause");
		system("cls");
	}
	cout << "money witdrawed: " << withdraw;
}

void ATM::printInfo() {
	cout << "--Cash in ATM--"<<endl;
	for (const auto& n : cash_info)
		cout << "[" << n.first << "] = " << n.second << "; "<<endl;
	cout << "Money sum: " << getMoneySum();
}