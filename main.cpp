#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Animal
{
public:
	void eat()
	{
		cout<<"eat"<<endl;
	}
};

class Giraffe :public Animal
{
public:
	void StretchNeck()
	{
		cout<<"stretch neck"<<endl;
	}

	void take()
	{
		eat();
	}
};

int main ()
{
	Animal a;
	Giraffe g;
//	a.eat();
	g.StretchNeck();
//	g.eat();
	g.take();

Animal *ani = NULL;
ani->eat();

union {
	unsigned char c;
	unsigned int i;
}u;

u.i=0xf0f1f2f3;

cout<<hex<<u.i<<endl;
cout<<hex<<(int)(u.c)<<endl;

    int *pint = new int[6];
	pint[0]=12;
	cout<<dec<<pint[0]<<endl;
	cout<<sizeof(pint)<<endl;
}