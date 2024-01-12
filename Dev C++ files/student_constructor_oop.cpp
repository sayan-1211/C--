#include <iostream>
using namespace std;
class MyStudent
{
	private:
		string name, address;
		int phone;
	public:
		MyStudent (string name, string address, int phone)
		{
			this->name=name;
			this->address=address;
			this->phone=phone;
		}
		MyStudent (MyStudent &s)
		{
			name=s.name;
			address=s.address;
			phone=s.phone;
		}
		void display()
		{
			cout << name << " "<< address << " " << phone << endl;
		}
};
int main()
{
	MyStudent s1("Ronnie", "Durgapur", 47);
	MyStudent s2(s1);
	s1.display();
	s2.display();
	return 0;
}
