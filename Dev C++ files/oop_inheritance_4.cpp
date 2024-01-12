#include <iostream>
using namespace std;
class Employee
{
	private:
		string org;
	public:
		Employee(string org)
		{
			this->org=org;
		}
		void display()
		{
			cout << "Organisation is " << org << endl;
		}
		
};
class Manager:public Employee
{
	private:
		string name,id,phone;
	public:
		Manager(string org, string name, string id, string phone):Employee(org)
		{
			this->name=name;
		    this->id=id;
			this->phone=phone;
		}
		void show()
		{
		   cout << "name, id & phone is " << name << "," << id << " & " << phone << endl;
	}
};
class Teacher:public Employee
{
	private:
		string name,id,phone;
	public:
		Teacher(string org, string name, string id, string phone):Employee(org)
		{
			this->name=name;
		    this->id=id;
			this->phone=phone;
		}
		void show()
		{
		   cout << "name, id & phone is " << name << "," << id << " & " << phone << endl;
	}
};
class Accountant:public Employee
{
	private:
		string name,id,phone;
	public:
		Accountant(string org, string name, string id, string phone):Employee(org)
		{
			this->name=name;
		    this->id=id;
			this->phone=phone;
		}
		void show()
		{
		   cout << "name, id & phone is " << name << "," << id << " & " << phone << endl;
	}
};
int main()
{
	Manager obj1("Trixie","Sayan","INDIA","99");
	obj1.display();
	obj1.show();
	Teacher obj2("Trixie","Ronnie","WB","47");
	obj2.display();
	obj2.show();
	Accountant obj3("Trixie","Eustace","DGP","121");
	obj3.display();
	obj3.show();
	return 0;
}
