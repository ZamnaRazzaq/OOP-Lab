#include <iostream>
#include<string>
using namespace std;
class author {
	string name;
	string email;
	char gender;
public:
	author() {

	}
	author(const string& n, const string& e, char g) {
		name = n;
		email = e;
		gender = g;
	}
	string getname()const {
		return name;
	}
	string getemail() const {
		return email;
	}
	void setemail(const string& e) {
		email = e;
	}
	char getgender() const {
		return gender;
	}
	void print() const {
		cout << name << "(" << gender << ")" << "at" << email;

	}
};
class Book {
	string name;
	author Author;
	double price;
	int qtyinstock;
public:

	Book(string n, author Authr, double p, int s = 0) {
		name = n;
		Authr = Author;
		price = p;
		qtyinstock = s;
	}
	string getname() {
		return name;
	}
	author getAuthor() {
		return Author;
	}
	double getprice() {
		return price;
	}
	void setprice(double p) {
		price = p;
	}
	int getqtyinstock() {
		return qtyinstock;
	}
	void setqtyinstock(int s) {
		qtyinstock = s;
	}
	string getauthorname() {
		return Author.getname();
	}
	void print() {
		cout << name << "by" << getname() << Author.getgender() << " at " << Author.getemail();

	}

};

int main() {
	// Declare and construct an instance of Author
	author peter("Peter Jones", " peter@somewhere.com", 'm');
	peter.print(); // Peter Jones (m) at peter@somewhere.com
	// Declare and construct an instance of Book
	cout << endl;
	Book Book("c++ for dummies",peter,19.99);
	Book.print();
	peter.print();
	cout << endl;
	// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
	peter.setemail("peter@xyz.com");
	peter.print(); // Peter Jones (m) at peter@xyz.com
	cout << endl;
	author peterr("Peter Jones", " peter@somewhere.com", 'm');
	Book.print();
	peterr.print();
	// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
	Book.getAuthor().setemail("peter@abc.com ");
	cout << endl;
	Book.print();
	peterr.print();
	//'C++ for Dummies'; by Peter Jones (m) at peter@somewhere.com
	system("pause");
}