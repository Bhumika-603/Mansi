#include<iostream>

using namespace std;

class Employee
{
	private:
		int id;
		static int count;

	public:
		void setData(void)
		{
			cout<<"Enter the employee ID: "<<endl;
			cin>>id;
			count++;
		}
		void getData(void)
		{
			cout<<"The Employee No "<<count<<" ID is "<<id<<endl;
		}
		static void getCount(void)
		{
			cout<<"The value of count is "<<count<<endl;
		}
};

int Employee :: count;

int main()
{
	Employee bhumika,aditya,mansi;
	bhumika.setData();
	bhumika.getData();
	Employee::getCount();

	mansi.setData();
        mansi.getData();
	Employee::getCount();

	aditya.setData();
        aditya.getData();
	Employee::getCount();

	return 0;
}
