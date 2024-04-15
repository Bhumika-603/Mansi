#include<iostream>

using namespace std;

class point
{
	private:
		int x,y;
	public:
		point(int a,int b)
		{
			x = a;
			y = b;
		}
		void printCoordinate()
		{
			cout<<"The Coordinate is ("<<x<<","<<y<<")"<<endl;
		}
};

int main()
{
	point c1(1,7);
	c1.printCoordinate();
	return 0;
}
