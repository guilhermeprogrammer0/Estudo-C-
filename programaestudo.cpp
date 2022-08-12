#include <stdio.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");
    float l1,l2,l3;

        printf("\n Informe o lado 1 do triângulo ");
            scanf("%d%*c",&l1);

        printf("\n Informe o lado 2 do triângulo ");
            scanf("%d%*c",&l2);

        printf("\n Informe o lado 3 do triângulo ");
            scanf("%d%*c",&l3);


         if((l1<(l1+l2)) && (l2<(l1+l3)) && (l3<(l1+l2)))
         {
             if((l1==l2) && (l1==l3))
         {
                printf("\n Triângulo Equilatero");
         }
            else if((l1!=l2) && (l1!=l3) && (l2!=l3))
            {
                printf("\n Triângulo Escaleno");
            }

            else
            {
                printf("\n Triângulo Isósceles");
            }

         }
         else
         {
             printf("\n Nao é triangulo");

         }







    return (0);
}
