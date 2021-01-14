#include<stdio.h>

void printDataSizes(int a,int b){

    printf("=====================\n");
    printf("A est: %d\n",a);
    printf("En octet est : %o\n",a);
    printf("En hexadecimal est %x\n",a);
    printf("=====================\n");
    printf("B est: %d\n",b);
    printf("En octet est : %o\n",b);
    printf("En hexadecimal est %x\n",b);

}

void makeCalculation(int a,int b, char Operation){

    printf("======= Using if else stathement:\n");
    if(Operation == '+'){

        printf("a+b=%d\n",a+b);

    }else if(Operation == '*'){

        printf("a*b=%d\n",a*b);

    }else if(Operation == '-'){

        printf("a-b=%d\n",a-b);

    }else if(Operation == '/'){

        if(b != 0){
            printf("a/b=%.2f\n",(float)a/b);
        }else{
            printf("<============== Error (Division sur 0)!! ================>");
        }

    }else if(Operation == '%'){

        if(b != 0){
            printf("a%%b=%.2f\n",a%b);
        }else{
            printf("Error (Division sur 0)!!");
        }

    }

    printf("======= Using Switch case stathement:\n");

        switch (Operation){
            case '+':
                printf("a+b=%d\n",a+b);
            break;
            case '*':
                printf("a*b=%d\n",a*b);
            break;
            case '-':
                printf("a-b=%d\n",a-b);
            break;
            case '/':
                if(b != 0){
                    printf("a/b=%.2f\n",(float)a/b);
                }else{
                    printf("<============== Error (Division sur 0)!! ================>");
                }
            break;
            case '%':
                if(b != 0){
                    printf("a%%b=%.2f\n",a%b);
                }else{
                    printf("<============== Error (Division sur 0)!! ================>");
                }
            break;
            default:
            // default code
            break;
            }

}

int main(){

    int a;
    int b;
    char Operation;

    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);

    printDataSizes(a,b);

    printf("===================\n");
    printf("Entrer le type d'operation:\n");

    scanf(" %c",&Operation);
    makeCalculation(a,b,Operation);
}
