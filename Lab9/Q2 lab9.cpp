#include <iostream>
using namespace std;
 class faculty {
public:
	virtual void print() {
		cout << "Faculty" << endl;
	}


};
class Administrator : virtual public faculty {
public:
	void print() {
		cout << "Administrator" << endl;
	}
};
class Teacher : virtual  public faculty {
public:
	void print() {
		cout << "Teacher" << endl;
	}
};
class Administratorteacher : public Administrator,  public Teacher {
public:
	void print() {
		cout << "Administrator Teacher";
	}
};

int main() {
	faculty* obj[3] = { new Administrator,new Teacher, new Administratorteacher };
	for (int i = 0; i < 3; i++) {
		obj[i]->print();
		cout << endl;
	}

	system("pause");

}