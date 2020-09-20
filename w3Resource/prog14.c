//Write a C program to calculate the distance between the two points.
//@hungryc0d3r
//formula (x1,y1), (x2,y2) is sqroot((x2-x1)^2+(y2-y1)^2)
#include<stdio.h>
#include<math.h>
void main(){
  int x1, x2;
  int y1, y2;
  float distanceBwTwoPoints;
  printf("Input x1: \n");
  scanf("%d",&x1);
  printf("Input x2: \n");
  scanf("%d",&x2);
  printf("Input y1: \n");
  scanf("%d",&y1);
  printf("Input y2: \n");
  scanf("%d",&y2);
  printf("Expected Output: \n");
  distanceBwTwoPoints=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  printf("Distance between the given points: %.4f",sqrt(distanceBwTwoPoints));
}
