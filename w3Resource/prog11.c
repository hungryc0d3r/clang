/*Write a C program that accepts an employee's ID, total
 worked hours of a month and the amount he received per
 hour. Print the employee's ID and salary (with two decimal places)
 of a particular month.*/
 //@hungryc0d3r
 #include<stdio.h>
 void main(){
   int employeeId;
   int workingHours;
   float salaryPerHour;
   float salary;
  printf("Enter Employee Id : \n");
   scanf("%d",&employeeId);
   printf("Enter the working hours: \n");
   scanf("%d",&workingHours);
   printf("Enter the salary per hour: \n");
   scanf("%f",&salaryPerHour);
   salary=salaryPerHour*workingHours;
   printf("Expected Output: \n");
   printf("Employee Id: %d \n",employeeId);
   printf("Salary: %f\n",salary);
 }
