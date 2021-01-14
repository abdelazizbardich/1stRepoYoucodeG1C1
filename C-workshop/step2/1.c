#include<stdio.h>

#define true 1
#define false !true

typedef int bool;

bool max(int a, int b){
    if(a>b){
        return true;
    }else{
        return false;
    }
}
void main(){

    bool theMax = max(5,9);

    if(theMax == 1){
        printf("True");
    }else if(theMax == 0){
        printf("False");
    }else{
        wprintf("Error!");
    }
}
