
#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;
    float Delta,x1,x2;
    printf("Entrer a:\n");
    scanf("%d",&a);
    printf("Entrer b:\n");
    scanf("%d",&b);
    printf("Entrer c:\n");
    scanf("%d",&c);

    Delta = pow(b,2) -4*(a*c);

    if(Delta > 0){
        x1 = (-b+sqrt(Delta))/2*a;
        x2 = (-b-sqrt(Delta))/2*a;
        printf("L'equation a deux solution X1 et X2:\n");
        printf("X1 = %f\n",x1);
        printf("X2 = %f\n",x2);
    }else if(Delta > 0){
        printf("L'equation a une solution X1:\n");
        x1 = (-b)/2*a;
        printf("X1 = %f\n",x1);

    }else{
        printf("L'equation n'a aucune solution\n");
    }

}
