// Lab13.cpp : Defines the entry point for the console application.
//


#include "point_for_pointer_containers.cpp"
#include <vector>

using namespace std;


int main()
{
	Point *p1 = new Point(1, 1);
	Point *p2 = new Point(2, 3);
	Point *p3 = new Point(4, 5);
	vector <Point> v ;
	float d12, d23, d31;
	d12 = p1->distance(*p2);
	d23 = p2->distance(*p3);
	d31 = p3->distance(*p1);

	
    return 0;
}

