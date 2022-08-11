#include <stdio.h>

int main()
{
    int matriz[2][2];
    int i,j;

    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {

            printf("\n Insira valores para %d e %d ",i, j);
            scanf("%d%*c",&matriz[i][j]);


        }

    }
    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {

            printf("\n %d ",matriz[i][j]);
            printf("\n ------------------");



        }

    }





    return (0);
}
