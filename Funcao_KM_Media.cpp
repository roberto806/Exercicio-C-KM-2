#include <stdio.h>
#include <stdlib.h>
int main()
{
    char tipo;
    float KM,consumo;   
    printf("Informe percurso em KM:\n");
    scanf("%f",&KM);
    printf("Informe o tipo de carro:\n");
    printf("Tipo A - 8Km/L\nTipo B - 9KM/L\nTipo C - 12KM/L\n");
    scanf ("%s", &tipo);   
   
    if (tipo == 'a' || tipo == 'A' )

    {
        consumo=KM/8;
        printf("A quentidade de combustivel consumida eh: %.2fL\n ", consumo);
       
    }
    else
    {
            if (tipo == 'b'|| tipo == 'B')
            {
                consumo=KM/9;
                printf("A quentidade de combustivel consumida eh: %.2fL\n ", consumo);       
            }
            else
            {
                if (tipo == 'c'|| tipo == 'C')
                {
                    consumo=KM/12;
                    printf("A quantidade de combustivel consumida eh: %.2fL\n ", consumo);       
                }
            }
    }
    system("pause");
    return 0;
}

