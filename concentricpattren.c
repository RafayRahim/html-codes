#include <stdio.h>

int main()
{
int n;
printf("enter the number:");
scanf("%d", &n);

printf("The Concentric Pattren: \n");
int value=n;
int i, l, k, m, j;
for( i=1; i<=n; i++){
    int v1=n;
    int v2=n-i+2;
    for( l=1; l<=i-1; l++){
        printf("%d", v1);
        v1--;
    }
    for( j=1; j<=n-i+1; j++){
        printf("%d", value);
    }
    for( k=1; k<=n-i; k++){
        printf("%d", value);
    }
    for( m=1; m<=i-1; m++){
        printf("%d", v2);
        v2++;
    }
    value--;
    printf("\n");
}

int d=n-1;

for( i=1; i<=d; i++){
    int v4=n;
    int v5=i+1;
    for( j=1; j<=d-i+1; j++){
        printf("%d", v4);
        v4--;
    }
    for( k=1; k<=i; k++){
        printf("%d", i+1);
    }
    for(l=1; l<=i-1; l++){
        printf("%d", i+1);
    }
    for(m=1; m<=d-i+1; m++){
        printf("%d", v5);
        v5++;
    }
    printf("\n");
}
    return 0;
}

