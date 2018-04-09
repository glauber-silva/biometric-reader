# include <stdio.h>

int maximum(int x, int y, int z); /* prototipo da função */

/* função  main  inicia  execução do programa */

int main(int argc, char const *argv[])
{
    int number1; /* primeiro inteiro */
    int number2; /* segundo inteiro */
    int number3; /* terceiro inteiro */
    printf("Digite três inteiros.\n");
    scanf("%d%d%d", &number1, &number2, &number3);

    /* number1, number2, number3  são argumentos  da chamada da função  maximum*/
    printf("Máximo é: %d\n", maximum(number1, number2, number3));
    return 0; /* indica conclusão bem sucedida */
} /* fim do main */

/* Definição da função Maximum */
/* x, y e z são parametros */

int maximum(int x, int y, int z) {
    int max = x; /* considera que o x é o maior valor */

    if (y > max )
    {
        max = y;
    }
    if (z > max )
    {
        max  = z;
    }
    return max;
}