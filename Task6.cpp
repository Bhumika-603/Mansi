#include<iostream>

using namespace std;

class y;

class x
{
	private:
		int val1;
	public:
		void inData(int data)
		{
			val1 = data;
		}
		void displayData()
		{
			cout<< val1 <<endl;
		}
		friend void swap(x &,y &);
};

class y
{
	private:
		int val2;
	public:
		void inData(int data)
		{
			val2 = data;
		}
		void displayData()
		{
			cout<< val2 <<endl;
		}
		friend void swap(x &,y &);
};

void swap(x &a,y &b)
{
	int temp = a.val1;
	a.val1 = b.val2;
	b.val2 = temp;
}

int main()
{
	x a1;
	a1.inData(5);
	a1.displayData();

	y b1;
	b1.inData(4);
	b1.displayData();

	swap(a1,b1);
	cout<<"After swaping the value of a is ";
	a1.displayData();
	cout<<endl;

	cout<<"After swaping the value of b is ";
	b1.displayData();
	cout<<endl;
	return 0;
}
