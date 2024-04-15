#include<iostream>

using namespace std;

class complex;

class calculator
{
	public:
		int sumRealComplex(complex o1,complex o2);
		int sumComplex(complex l1,complex l2);
};

class complex
{
	private:
		int a,b;
		friend int calculator :: sumRealComplex(complex o1,complex o2);
		friend int calculator :: sumComplex(complex l1,complex l2);

	public:
		void setNumber(int n1,int n2)
		{
			a = n1;
			b = n2;
		}

		void printNumber()
		{
			cout<<"The complex Number is "<<a<<" + "<<b<<"i"<<endl;
		}
};

int calculator :: sumRealComplex(complex o1,complex o2)
{
	return (o1.a + o2.a);
}

int calculator :: sumComplex(complex l1,complex l2)
{
	return (l1.b + l2.b);
}

int main()
{
	complex p1,p2;
	p1.setNumber(8,2);
	p1.printNumber();

	p2.setNumber(4,7);
	p2.printNumber();

	calculator cal;
	int result = cal.sumRealComplex(p1,p2);
	cout<<"The result is "<<result<<endl;

	result = cal.sumComplex(p1,p2);
	cout<<"The result is "<<result<<endl;

	return 0;
}
