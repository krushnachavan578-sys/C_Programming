/*name: krushna
UIN: 2510026
feild: civil
div: B */
#include <stdio.h>
int main() {
int physics, chemistry, math ;
float average;
printf("Enter Physics marks: ");
scanf("%d", &physics);
printf("Enter Chemistry marks: ");
scanf("%d", &chemistry);
printf("Enter Math marks: ");
scanf("%d", &math);

average = (physics + chemistry + math) / 3.0;

printf("\nAverage Marks = %.2f\n", average);

if (average >= 50 && physics >= 50 && chemistry >= 50 && math >= 50) {
printf(" Student is Eligible.\n");
} else {
printf(" Student is Not Eligible.\n");
}
return 0;
}
