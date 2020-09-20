/*Write a C program to calculate a bike’s average consumption
from the given total distance (integer value) traveled (in km)
 and spent fuel (in liters, float number – 2 decimal point).*/
 //@hungryc0d3r
 #include<stdio.h>
 int main(){
   int distanceTraveled;
   float fuelSpent;
   float avgFuelConsumption;
   printf("Input total distance in km:\n");
   scanf("%d",&distanceTraveled);
   printf("Input total fuel spent in liters: \n");
   scanf("%f",&fuelSpent);
   printf("Expected Output: \n");
   avgFuelConsumption=distanceTraveled/fuelSpent;
   printf("Average consumption (km/lt): %f",avgFuelConsumption);
return 0;
 }
