#include<iostream>

using namespace std;

class y;

class x
{
	private:
		int data;
	public:
		void setValue(int value)
		{
			data = value;
		}

		void printValue()
		{
			cout<<"The value of x class member is "<<data<<endl;
		}

		friend void add(x,y);
};

class y
{
	private:
		int num;
	public:
		void setValue(int value)
		{
			num = value;
		}

		void printValue()
		{
			cout<<"The value of y class member is "<<num<<endl;
		}
		
		friend void add(x,y);
};

void add(x o1,y o2)
{
	cout<<"Summing data x and y object is "<<(o1.data + o2.num)<<endl;
}

int main()
{
	x a;
	a.setValue(5);
	a.printValue();

	y b;
	b.setValue(20);
	b.printValue();

	add(a,b);
	return 0;
}
