#include <stdio.h>

void main(){
int numbre;
float total;
int i = 0;
float moyenne;
    while(1){
        printf("Entrer un nombre:\n");
        scanf("%d",&numbre);
        if(numbre < 0){
            moyenne = (float)total/i;
            printf("La moyenne est: %.2f",moyenne);
            break;
        }
        else{
        total += numbre;
            i++;
        }
    }
}
