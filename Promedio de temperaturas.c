# include <stdio.h>
# include <stdlib.h>
int main ()
{
    float temp, sum=0, prom;
    int num=0;
    printf ("\n\t Programa de control de temperatura de procesadores\n\t");
    printf ("\n Ingrese temperatura del procesador \n\t");
    scanf ("%f", &temp);
    while (temp !=0)
    {
        if (temp<0)
        {
            printf ("\n Ingrese temperatura del procesador (acabar programa con 0) \n\t");
        }
        else
        {
            num++;
            sum+=temp;
        }
        printf ("\n\t Ingrese otro numero (fin con cero)");
        scanf ("%f", &temp);
    }
    prom=(float)sum/num;
    printf("\n\t Se ingresaron %i datos  \n\t", num);
    printf ("\n\t La suma de temperaturas fue de: %.2f", sum);
    printf ("\n\t EL promedio de temperaturas es de: %.2f", prom);
    getch();
    return 0;
}
