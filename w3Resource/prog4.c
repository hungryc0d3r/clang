/*Write a C program to compute the perimeter and area of a rectangle
 with a height of 7 inches. and width of 5 inches. */
 #include<stdio.h>
 int main(){
    int l=7, b=5;
    int p=2*(l+b);
    printf("Perimeter of rectangle= %d inches\n",p);
    int area=l*b;
    printf("Area of rectangle= %d square inches\n",area);
    return 0;
 }
