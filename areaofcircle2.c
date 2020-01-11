#include <stdio.h>
#include <stdlib.h>

float findareaofacircle(float radius)
{
	float areaofacircle;
	areaofacircle = M_PI * radius * radius;

	return areaofacircle;
}

int main(int argc, char* argv[])
{
  float min, max;
  
  if (argc == 3)
  {
  min = atof(argv[1]);
  max = atof(argv[2]);
  }
  else
  {
    printf("Please re-enter your numbers\nMin: ");
    scanf("%f", &min);
    printf("Max: ");
    scanf("%f", &max);
  }
  
  while ( max < min)
  {
    printf("%d", argc);
    printf("Please re-enter your numbers\nMin: ");
    scanf("%f", &min);
    printf("Max: ");
    scanf("%f", &max);
  }


  

	float rad, i;
	for (i = min; i < max; i+=0.5)
	{
		rad = findareaofcircle(i);
		printf("Area of circle with radius %f is %f\n",i , rad);
	}

	return 0;


}
