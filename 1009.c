#include <stdio.h>

int main()
{
    char name[60];
    float a,b;
    scanf("%s",&name);
    scanf("%f",&a);
    scanf("%f",&b);
    b = a+(b*15)/100;
    printf("TOTAL = R$ %.2f\n",b);

    return 0;
}
