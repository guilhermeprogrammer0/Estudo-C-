#include <stdio.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");
    float l1,l2,l3;

        printf("\n Informe o lado 1 do tri�ngulo ");
            scanf("%d%*c",&l1);

        printf("\n Informe o lado 2 do tri�ngulo ");
            scanf("%d%*c",&l2);

        printf("\n Informe o lado 3 do tri�ngulo ");
            scanf("%d%*c",&l3);


         if((l1<(l1+l2)) && (l2<(l1+l3)) && (l3<(l1+l2)))
         {
             if((l1==l2) && (l1==l3))
         {
                printf("\n Tri�ngulo Equilatero");
         }
            else if((l1!=l2) && (l1!=l3) && (l2!=l3))
            {
                printf("\n Tri�ngulo Escaleno");
            }

            else
            {
                printf("\n Tri�ngulo Is�sceles");
            }

         }
         else
         {
             printf("\n Nao � triangulo");

         }







    return (0);
}
