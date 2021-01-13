#include<stdio.h>

int main(){
    float pi = 3.14;
    float r,P,D,S;
    printf("Entrer le rayon:\n");
    scanf("%f",&r);

    D = r*2;
    P = (D*r)*pi;
    S = (r*r)*pi;
    printf("Le rayon r est: %f\n",r);
    printf("Le diameitre D est: %f\n",D);
    printf("La surface S est: %f\n",S);
    printf("Le Perimaitre P est: %f\n",P);
}
