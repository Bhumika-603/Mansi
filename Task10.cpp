#include<iostream>
#include<math.h>

using namespace std;

class func
{
	private:
		float x,y;
	public:
		func(float a,float b)
		{
			x = a;
			y = b;
		}
		void printCoordinate()
		{
			cout<<"The coordinate is ("<<x<<","<<y<<")"<<endl;
		}
		friend float distance(func o1,func o2);
};

float distance(func o1,func o2)
{
	float x = sqrt((o1.x - o2.x)*(o1.x - o2.x) - (o1.y - o2.y)*(o1.y - o2.y));
	return x;
}

int main()
{
	func c1(1,6);
	c1.printCoordinate();

	func c2(5,9);
	c2.printCoordinate();

	float res = distance(c1,c2);
	cout<<"The distance between two point is "<<res<<endl;

	return 0;
}
