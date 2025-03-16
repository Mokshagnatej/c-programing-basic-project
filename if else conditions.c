#include <stdio.h>

int main()
{
    float u, a, t, v, s;
// Input values
printf("Enter initial velocity (u): ");
scanf("%f", &u);
printf("Enter acceleration (a): ");
scanf("%f", &a);
printf("Enter time (t): ");
scanf("%f", &t);
// Compute final velocity and displacement
v = u + (a * t);
s = (u * t) + (0.5 * a * t * t);
// Display results
printf("\nFinal velocity (v) = %.2f m/s", v);
printf("\nDisplacement (s) = %.2f meters\n", s);
return 0;
}