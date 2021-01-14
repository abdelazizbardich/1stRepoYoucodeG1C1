#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Entrer a:\n");
    scanf("%d",&a);
    printf("Entere b:\n");
    scanf("%d",&b);

    printf("---------------------\n");
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%.2f\n",(float)a/b);
    printf("a%%b=%d\n",a%b);

    return 0;
}
