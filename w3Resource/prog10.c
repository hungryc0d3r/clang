/* Write a C program that accepts two item’s weight
 (floating points' values ) and number of purchase
 (floating points' values) and calculate the average
 value of the items.*/
 //@hungryc0d3r
 #include<stdio.h>
 void main(){
   float weightOfItem1,weightOfItem2;
   float noOfItem1,noOfItem2;
   float averageValue;
    printf("Enter weight of item1:  \n");
     scanf("%f",&weightOfItem1);
    printf("no of item1: \n");
     scanf("%f",&noOfItem1);
    printf("Enter weight of Item2 \n");
     scanf("%f",&weightOfItem2);
    printf("no of noOfItem2: \n");
     scanf("%f",&noOfItem2);
    printf("Expected output: \n");
    averageValue=((weightOfItem1*noOfItem1)+(weightOfItem2*noOfItem2))/(noOfItem1+noOfItem2);
    printf("Average Value: %f",averageValue);
 }
