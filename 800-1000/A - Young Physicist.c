#include <stdio.h>
 
int main (void)
{
    int vetores = 0;
    scanf("%i", &vetores);
 
    int forcas[vetores][3];
    int valorx = 0, valory = 0, valorz = 0;
 
    for (int i = 0; i < vetores; i++)
    {
        scanf("%i %i %i", &forcas[i][0], &forcas[i][1], &forcas[i][2]);
        valorx += forcas[i][0];
        valory += forcas[i][1];
        valorz += forcas[i][2];
    }
    if (valorx == 0 && valory == 0 && valorz == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

}