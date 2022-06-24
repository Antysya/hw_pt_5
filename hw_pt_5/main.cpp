#include "ATM.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	FiveThousand root;
	TwoThousand tt;
	OneThousand ot;
	FiveHundred fh;
	TwoHundred th;
	OneHundred oh;
	root.add(&tt);
	root.add(&ot);
	root.add(&fh);
	root.add(&th);
	root.add(&oh);

	cout << "Добрый день! Вас приветствует банкомат Банка \"Суслик\"\n";
	cout << "Обращаю внимание, что для снятия доступна сумма кратная 100 рублям!\n";
	cout << "Введите сумму для снятия\n";
	int sum;
	cin >> sum;
	if (sum % 100 != 0) {
		cout << "Сумма не кратна 100! \n Операция прекращена";
		return 0;
		}
	else
		root.handle(sum);	

}