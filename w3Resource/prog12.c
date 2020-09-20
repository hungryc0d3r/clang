/*Write a C program that accepts three integers and
find the maximum of three.*/
//@hungryc0d3r
#include<stdio.h>
int main(){
  int num1, num2, num3;
  printf("Enter num1: ");
  scanf("%d",&num1);
  printf("Enter num2: ");
  scanf("%d",&num2);
  printf("Enter num3: ");
  scanf("%d",&num3);
  printf("Expected Output: \n");
  if (num1>num2&&num1>num3) {
    printf("Maximum value of three integers: %d",num1);
  }
  else if (num2>num1&&num2>num3) {
    printf("Maximum value of three integers: %d",num2);
  }
  else /*(num3>num2&&num3>num1)*/ {
      printf("Maximum value of three integers: %d",num3);
    }
return 0;

}
