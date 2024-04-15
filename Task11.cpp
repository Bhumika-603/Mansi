#include<iostream>

using namespace std;

class complex
{
	private:
		int a,b;
	public:
		complex(int x,int y)
		{
			a = x;
			b = y;
		}

		complex(int x)
		{
			a = x;
			b = 0;
		}

		void printComplexNumber()
		{
			cout<<"The Complex Number is "<<a<<" + "<<b<<"i"<<endl;
		}
};

int main()
{
	complex c1(1,5);
	c1.printComplexNumber();

	complex c2(6);
	c2.printComplexNumber();
	
	return 0;
}
