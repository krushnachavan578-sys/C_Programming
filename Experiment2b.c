/* name: krushna
UIN: 2510026
feild: civil
div: B  */
#include <stdio.h>
int main() {
    int start, end, sum = 0;
    
     printf("Enter the starting number: ");
     scanf("%d", &start);
     
     printf("Enter the ending number: ");
     scanf("%d", &end);
     
     for (int i = start; i <= end; i++) {
         if (1% 2 != 0) { // check odd
          sum += i;
         }
}
printf("Sum of odd numbers between %d and %d = %d\n", start, end, sum);
return 0;
}
