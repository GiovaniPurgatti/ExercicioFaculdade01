#include <stdio.h>


int main() {

    float nota1, nota2, media;
    int flag; // bandeira para execução de teste do while


    while (flag != 0) {
        printf("Por favor insira valores entre 0 e 10\n");
        printf("=========================================\n");

        printf("Insira o valor da nota 1:");
        scanf("%f", &nota1);
        printf("Insira o valor da nota 2:");
        scanf("%f", &nota2);

        printf("=========================================\n");

        if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10) {
            flag += flag + 1; // bandeira para execução de teste do while


        } else {
            media = (nota1 + nota2) / 2;
            if (media >= 6) {
                printf("A media do aluno foi: %.2f\nStatus: Aprovado", media);
            } else {
                printf("A media do aluno foi: %.2f\nStatus: Reprovado", media);

            }
            flag =0;// bandeira para execução de teste do while
        }
    }
        return 0;

}
