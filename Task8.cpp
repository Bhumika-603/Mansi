#include<iostream>

using namespace std;

class complex
{
	private:
		int a,b;
	public:
		complex(int ,int );
		void printComplexNumber()
		{
			cout<<"The complex Number is "<<a<<" + "<<b<<"i"<<endl;
		}
};

complex :: complex(int x,int y)
{
	a = x;
	b = y;
}

int main()
{
	complex c1(1,6);
	complex c2 = complex(11,66);
	c1.printComplexNumber();
	c2.printComplexNumber();
	return 0;
}
