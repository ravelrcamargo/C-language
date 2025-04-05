#include <stdio.h>
#include <stdlib.h>

int fatorialRecursivo(int num){

    if(num == 0){
        return 1;
    }else{
        return num * fatorialRecursivo(num - 1);
    }

}

int fatorialComLaco(int num){
    int resultado = 1;
    for(int i = 1; i<= num; i++){
        resultado = resultado *  i;
    }
    return resultado;
}
int main()
{
   int num;
    printf("Digite um numero para saber seu fatorial: ");
    scanf("%d", &num);


    int resultado = fatorialRecursivo(num);

    printf("Fatorial de %d (recursivo) = %d\n", num, fatorialRecursivo(num));


    int resultado2 = fatorialComLaco(num);
    printf("Fatorial de %d (Com laco) = %d\n", num, fatorialComLaco(num));





    return 0;
}
