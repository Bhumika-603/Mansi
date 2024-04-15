#include<iostream>

using namespace std;

class complex1
{
	int a;
	int b;

	public:
	void setData(int v1, int v2)
	{
		a = v1;
		b = v2;
	}

	void setDataByComplex(complex1 o1,complex1 o2)
	{
		a = o1.a + o2.a;
		b = o1.b + o2.b;
	}

	void printComplexNumber()
	{
		cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
	}
};

int main()
{
	complex1 c1,c2,c3;

	c1.setData(3, 4);
	c1.printComplexNumber();

	c2.setData(1, 5);
        c2.printComplexNumber();

	c3.setDataByComplex(c1, c2);
	c3.printComplexNumber();


	return 0;
}
