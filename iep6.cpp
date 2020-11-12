#include<iostream>
#include<string>

//using namespace std;

class A {
 
private:
	int a;
 
public:
 
	A() {
		std::cout << "creat object of A" << std::endl;
		a = 1;
	}
 
	~A() {
		std::cout << "destroy an object A" << std::endl;
	}
 
	void print() {
		std::cout << "cout a is " << a << std::endl;
	}
 
};
 
template <typename V>
class SmartPtr {
 
private:
	V*v;
 
public:
 
	SmartPtr(V*ptr):v(ptr){}
 
	~SmartPtr() {
		std::cout << "to delete a smart pointer" << std::endl;
		delete v;
	}
 
	V& operator * () const {
		return *v;
	}
 
	//-> operator overloading
	V* operator -> () const {
		return v;
	}
 
};
 
int main() {
 
	SmartPtr<A> sp(new A());
 
	sp->print();
 
	int n;
	std::cin >> n;
 
	if (n < 10)
		return 0;
 
	return 0;
}