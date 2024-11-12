#include <stdio.h>
#include <math.h>

int main(){
   const float Pie = 3.141592654
   ;float radius,height,Area;

   printf("Enter the radius of the cylinder");
   scanf("%f",&radius);

   printf("Enter the height of the cylinder");
   scanf("%f",&height);

   Area = (2*Pie*radius*height)+(2*Pie*pow (radius,2));

   printf("Surface area of the cylinder is %f\n",Area);

   return 0;
}
