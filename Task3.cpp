#include<iostream>

using namespace std;

class complex 
{
	private:
		int a,b;
	public:
		void complexNumber(int v1,int v2)
		{
			a = v1;
			b = v2;
		}

		friend complex sumOfTwoComplex(complex o1, complex o2);

		void printComplex()
		{
			cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
};

complex sumOfTwoComplex(complex o1, complex o2)
{
	complex o3;
	o3.complexNumber((o1.a + o2.a),(o1.b + o2.b));
	return o3;
}

int main()
{
	complex c1,c2,sum;

	c1.complexNumber(1,5);
	c1.printComplex();

	c2.complexNumber(4,8);
        c2.printComplex();

	sum = sumOfTwoComplex(c1,c2);
	sum.printComplex();
	return 0;
}
