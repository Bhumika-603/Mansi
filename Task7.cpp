#include<iostream>

using namespace std;

class complex
{
	private:
		int a,b;
	public:
		complex(void);
		void printData()
		{
			cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
		}		
};

complex :: complex(void)
{
	a = 10;
	b = 2;
}

int main()
{
	complex c1;
	c1.printData();
	return 0;
}
