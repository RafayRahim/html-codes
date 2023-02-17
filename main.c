#include <stdio.h>

int main()
{
 char ch[100];
 printf("Enter the alphabat");
scanf("%s", ch);

int lenght=0;

for(int i=0; ch[i]!='\0'; i++){
    lenght++;
}

for(int i=0; i<=lenght; i++){
    int k=0;
    for(int space=1; space<=lenght-i; space++){
        printf(" ");
    }
    for(int j=1; j<=i; j++){
        printf("%c ", ch[k]);
        k++;
    }
    printf("\n");
}

    return 0;
}