#include<iostream>

using namespace std;

class simple
{
	private:
		int data1,data2;
	public:
		simple(int a,int b = 9)
		{
			data1 = a;
			data2 = b;
		}

		void printData();
};

void simple :: printData()
{
	cout<<"The value of Data1 and Data2 is "<<data1<<" and "<<data2<<endl;
}

int main()
{
	simple c1(1);
	c1.printData();
	return 0;
}
