#include <stdio.h>
#include <math.h>

 int main() {
     
    double area, n, raio;
    
    n = 3.14159;
    scanf("%lf", &raio);
    area = 3.14159 * (raio*raio);
    printf("A=%.4lf\n", area);
 
    return 0;
}
