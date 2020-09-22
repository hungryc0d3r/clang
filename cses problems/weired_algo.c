/* Algorithm : input n is +ve
then => if n is odd multiply with 3 and add 1
        if nis even then divide it by 2 */

// @hungryc0d3r
#include<stdio.h>
void main(){
  int number;
  printf("Enter the number n:");
  scanf("%d",&number);
  printf("%d \t",number);
   while (number!=1) {
     if (number%2==0) {
       printf("%d \t",(number/2));
       number=number/2;
     }
     else{
       printf("%d \t",(number*3+1));
       number=(number*3+1);
     }
   }
}
