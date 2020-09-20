/*Write a C program to read an amount (integer value) and break the
amount into smallest possible number of bank notes.*/
//@hungryc0d3r
#include<stdio.h>
void main(){
  int amt , total;
  printf("Input the amount: \n");
  scanf("%d",&amt);
  total=amt/100;
  printf("Expected Output: \n");
  printf("there are: ");
  printf("\n %d Note(s) of 100.00",total);
  amt = amt-(total*100);
  total = amt/50;
  printf("\n %d Note(s) of 50.00",total);
  amt = amt-(total*50);
	total = amt/20;
  printf("\n %d Note(s) of 20.00",total);
  amt = amt-(total*20);
	total = amt/10;
  printf("\n %d Note(s) of 10.00",total);
  amt = amt-(total*10);
	total = amt/5;
  printf("\n %d Note(s) of 5.00",total);
  amt = amt-(total*5);
	total = amt/2;
  printf("\n %d Note(s) of 2.00",total);
  amt = amt-(total*2);
	total = amt/1;
  printf("\n %d Note(s) of 1.00",total);

}
