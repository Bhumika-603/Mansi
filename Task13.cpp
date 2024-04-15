#include<iostream>

using namespace std;

class complex
{
	int a,b;
	public:
		complex(int x,int y = 8)
		{
			a = x;
			b = y;
		}
		void printComplexNumber();
};

void complex :: printComplexNumber()
{
	cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}

int main()
{
	complex c1(4);
	c1.printComplexNumber();

	return 0;
}
