#include <iostream>
using namespace std;
class Employee
{
	private:
		string name,id;
	public:
		Employee(string name, string id)
		{
			this->name=name;
			this->id=id;
		}
		void display()
		{
			cout << "name & ID is " << name << " & " << id << endl;
		}
		
};
class Manager:public Employee
{
	private:
		string address,phone;
	public:
		Manager(string name, string id, string address, string phone):Employee(name,id)
		{
		    this->address=address;
			this->phone=phone;
		}
		void show()
		{
		   cout << "address & phone is " << address << " & " << phone << endl;
		}
		
};
int main()
{
	Manager obj("Ronnie","AK","India","47");
	obj.display();
	obj.show();
	return 0;
}
