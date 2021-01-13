#include <stdio.h>
int main()
{

    char fName[25];
    char lName[25];
    int Age;
    char Sex[25];
    long Phone;

    printf("Bonjour\n");
    printf("Enter votre nom:\n");
    scanf("%s",&fName);
    printf("Enter votre prénom:\n");
    scanf("%s",&lName);
    printf("Enter votre Age:\n");
    scanf("%d",&Age);
    printf("Enter votre Sex:\n");
    scanf("%s",&Sex);
    printf("Enter votre Numéro de téléphone:\n");
    scanf("%ld",&Phone);

    printf("Votre Prénom %s\n",fName);
    printf("Votre Nom %s\n",lName);
    printf("Votre Age %d\n",Age);
    printf("Votre Sex %s\n",Sex);
    printf("Votre Téléphone %ld\n",Phone);
    return 0;
}
