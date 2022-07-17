#include <stdio.h>
#include <stdlib.h>

float IMC(float peso, float altura);

int main()
{
    printf("\n\n\n               VAMOS CALCULAR O SEU IMC\n\n\n");

    float peso, altura;
    printf("Digite o peso: ");
    scanf("%f",&peso);
    printf("\ndigite a altura: ");
    scanf("%f", &altura);

    float conta = peso / (altura*altura);
    printf("\nAqui o seu IMC: %.2f\n", conta);

}
