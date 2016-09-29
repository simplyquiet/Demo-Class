//complete me

#include <iostream>
#include "MyClass.h"
using namespace std;

void print(string pre, MyClass m, string suff)
{
	cout<<pre<<"("<<m.getnum()<<","<<m.getroom()<<","<<boolalpha<<m.getfun()<<suff;
}


int main()
{
	MyClass Myvar;
	MyClass Myvar2;
	int var = 10;
	string str;

	cin>>var;
	cout<<"var = "<<var<<endl;

	cin>>Myvar;
	cout<<Myvar<<endl;

	cin>>str;
	cout<<"str = "<<str;


	MyClass m1;
	MyClass m2 = {35, "LR10"};
	MyClass m3 = {16};

	print("m1 =", m1,"\n");
	print("m2 =",m2,"\n");
	print("m3 =",m3,"\n");

}
