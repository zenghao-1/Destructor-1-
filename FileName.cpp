#include <iostream>
#include <string>
using namespace std;

//Weapen ������

class Weapen
{
public:
	Weapen();
	
	~Weapen();

	string* Name;
	float* Health;

};

//������

int main()
{
	Weapen* weapen = new Weapen;

	cout << "--------------------------" << endl;

	delete weapen;//����������������һ

	weapen->~Weapen();//������������������

}

//Weapen ������������

Weapen::Weapen()
{
	cout << "A new weapen is forged!" << endl;

	Name = new string("Spot");
	Health = new float(100.f);

	cout << "Name:" << *Name << endl;
	cout << "Health:" << *Health << endl;
}

Weapen::~Weapen()
{
	cout << "The weapen was desforged!" << endl;

	delete Name;
	delete Health;

	cout << "Health:" << *Health << endl;
	cout << "Name:" << *Name << endl;
}






