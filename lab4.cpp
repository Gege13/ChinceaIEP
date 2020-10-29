#include<iostream>
#include<string>

using namespace std;

void display(); 

class Human {
	private: 
		int age;
		int salary;
		string name;
	public:
		Human(int iage,int isal,string iname) {
			age=iage;
			salary=isal;
			name=iname;
		}
         
	void tell(){
		cout<<age<<salary<<endl<<name<<endl;
	}

    ~Human();

    Human(const Human&);
    Human& operator=(const Human&);
		
	friend class man; 	

};

class man{

	public:
		
		void display(Human *george) {
	
			cout<<"name: " <<george->name<<","<<"salary : "<<george->salary<<", "<<"age:"<<george->age<<endl;
		}


};


int main() {
	
	Human *obj=new Human(20,2004444,"Anish Singh Walia");
	man *george=new man;
	george->display(obj);
	
return 0;
	
}