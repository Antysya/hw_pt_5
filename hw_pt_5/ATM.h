#pragma once
#include <iostream>
using namespace std;

static class Base {
	Base* next;
public:
	
	Base() {
		next = 0;
	}
	void setNext(Base* n) {
		next = n;
	}
	void add(Base* n) {
		if (next)
			next->add(n);
		else
			next = n;
	}
	virtual void handle(int i) {
		next->handle(i);
	}
};

class FiveThousand: public Base {
public:
	void handle(int i) {
		if (i >= 5000) {
			cout << "����� 5000 - " << i / 5000 << " ��." << endl;
			Base::handle(i % 5000);
		}
		else
			Base::handle(i);
	}
};

class TwoThousand : public Base {
public:
	void handle(int i) {
		if (i >= 2000) {
			cout << "����� 2000 - " << i / 2000 << " ��."  << endl;
			Base::handle(i % 2000);
		}
		else
			Base::handle(i);
	}
};

class OneThousand : public Base {
public:
	void handle(int i) {
		if (i >= 1000) {
			cout << "����� 1000 - " << i / 1000 << " ��." << endl;
			Base::handle(i % 1000);
		}
		else
			Base::handle(i);
	}
};

class FiveHundred : public Base {
public:
	void handle(int i) {
		if (i >= 500) {
			cout << "����� 500 - " << i / 500 << " ��." << endl;
			Base::handle(i % 500);
		}
		else
			Base::handle(i);
	}
};

class TwoHundred : public Base {
public:
	void handle(int i) {
		if (i >= 200) {
			cout << "����� 200 - " << i / 200 << " ��." << endl;
			Base::handle(i % 200);
		}
		else
			Base::handle(i);
	}
};

class OneHundred : public Base {
public:
	void handle(int i) {
		if (i >= 100) {
			cout << "����� 100 - " << i / 100 << " ��." << endl;
		}
	}
};
