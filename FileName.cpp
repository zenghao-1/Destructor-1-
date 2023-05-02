#include <iostream>
#include <string>
using namespace std;

//Weapen 类主体

class Weapen
{
public:
	Weapen();
	
	~Weapen();

	string* Name;
	float* Health;

};

//主函数

int main()
{
	Weapen* weapen = new Weapen;

	cout << "--------------------------" << endl;

	delete weapen;//调用析构函数方法一

	weapen->~Weapen();//调用析构函数方法二

}

//Weapen 类外声明函数

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






