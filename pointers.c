#include <stdio.h>

int main()
{
 
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);
  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
 
  float d, e;
  
 d = 50.5;
  e = 100.6;

  printf("The value of d is %f\n", d);
  printf("The value of e is %f\n", e);

  printf("The value of d is %d\n", &d); 
  printf("The value of d is %d\n", &e);

  float* ptrd, ptre;

}

