#include <stdio.h>
#include <math.h>


float findareaofacircle(float radius)
{
	float areaofacircle;
	areaofacircle = M_PI * radius * radius;

	return areaofacircle;
}

int main()
{
	float rad, i;
	for (i = 3.5; i < 12.5; i+=1.0)
	{
		rad = findareaofacircle(i);

		printf("The area of circle with the radius %f is %f\n",i , rad);
	}

	return 0;


}

