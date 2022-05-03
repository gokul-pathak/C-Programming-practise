//demo of strucutre

// wap in c that computes distance between two points using strucutre
// (x2-x1)^2=(x2-x1)^2
// y^2= y.y

#include<conio.h>


struct point
{
	int x,y;
};
void main()
{
	struct point p1={10,3},p2={70,15};
	float dist=sqrt((p2.x - p1.x)*(p2.x - p1.x)+(p2.y - p1.y)*(p2.y - p1.y));
	printf("\nDistance: %f", dist);
	getch();
}
