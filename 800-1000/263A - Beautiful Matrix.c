#include <stdio.h>

int main (void)
{
    int matriz[5][5];
    int movimentos = 0;

    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%i", &matriz[i][j]);
            if (matriz[i][j] == 1)
            {
                if (i >= 2)
                {
                    movimentos += i - 2;
                }
                else if (i < 2)
                {
                    movimentos += 2 - i;
                }
                if (j >= 2)
                {
                    movimentos += j - 2;
                }
                else if (j < 2)
                {
                    movimentos += 2 - j;
                }
            }
        }
    }
    printf("%i", movimentos);


}