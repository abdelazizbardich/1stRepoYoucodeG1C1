#include <stdio.h>

void main(){
int numbre;
int total;
int i = 0;
float moyenne;
    while(1){
        printf("Entrer un nombre:\n");
        scanf("%d",&numbre);
        if(numbre < 0){
            moyenne = total/i;
            printf("La moyenne est: %f",moyenne);
            break;
        }
        else{
        total += numbre;
            i++;
        }
    }
}
