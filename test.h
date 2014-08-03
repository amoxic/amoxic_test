
#ifndef _TEST_H_
#define _TEST_H_

#include <iostream>

using namespace std;
class D
{
public:
	int d;
	int dd;

    D(int var1)
	{
		d = var1;
		cout<<"constructor with one paramter of "<<var1<<endl;
	}
	D(int var1, int var2)
	{
		d = var1;
		dd = var2;

		cout<<"constructor with tow paramter of "<<var1<<" and "<<var2<<endl;
	}
	void printD()
	{
		cout<<"d, dd, sd are "<<d<<" "<<dd<<" "<<sd<<endl;
	}
	D()
	{
	}

	D & operator= (const D &other);
private:
		static int sd;

};



int D::sd=11;
 static D g_dd;

template <class T1, class T2>

class test_T 
{
public:
	T1 t1;
	T2 t2;
	test_T(T1 var1, T2 var2);
	void show();
};

template <class T1, class T2> 
test_T<T1, T2>::test_T(T1 var1, T2 var2):t1(var1),t2(var2)
{
}

template <class T1, class T2> 
void test_T<T1,T2>::show()
{
	cout<<"t1 is "<<t1<<", t2 is "<<t2<<endl;
}



#endif