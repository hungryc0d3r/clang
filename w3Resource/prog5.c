/*Write a C program to compute the perimeter and
area of a circle with a radius of 6 inches.*/
// @hungryc0d3r
#include<stdio.h>
void main(){
  float r=6;
  float pi=3.14;
  float p=2*pi*r;
  printf("Perimeter of the circle= %f  \n",p);
  float area=pi*r*r;
  printf("Area of the circle= %f \n",area);
}
