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

	cout << "������ ����! ��� ������������ �������� ����� \"������\"\n";
	cout << "������� ��������, ��� ��� ������ �������� ����� ������� 100 ������!\n";
	cout << "������� ����� ��� ������\n";
	int sum;
	cin >> sum;
	if (sum % 100 != 0) {
		cout << "����� �� ������ 100! \n �������� ����������";
		return 0;
		}
	else
		root.handle(sum);	

}