#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2,i;

    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);

    printf("Insira o segundo valor: ");
    scanf("%d", &num2);

    if(num1 < num2){
        for(i=num1; i <= num2;i++){
            printf(" %d",i);
        }
        printf("\n");
        for(i=num2; i>=num1; i--){
            printf(" %d", i);
        }
    }else if(num1 == num2){
        printf("Os valores sao iguais");
    }





    return 0;
}
