#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    char times[100];
    fgets(times, 100, stdin);
    for (int i = 0; i < 100; i++)
    {
        if (times[i] == '\n')
        {
            times[i] = '\0';
            break;
        }
    }

    int timesemsequencia = 0;

    for (int i = 0; i < strlen(times); i++)
    {
        timesemsequencia = 0;
        if (times[i] != '0')
        {
            for(int k = i; k < strlen(times); k++)
            {
                if (times[k] == '0')
                {
                    timesemsequencia++;
                }
                else
                {
                    break;
                }

                if (timesemsequencia >= 7)
                {
                    printf("YES");
                    return 0;
                }
                
            }
        }
        if (times[i] != '1')       {
            for(int k = i; k < strlen(times); k++)
            {
                if (times[k] == '1')
                {
                    timesemsequencia++;
                }
                else
                {
                    break;
                }

                if (timesemsequencia >= 7)
                {
                    printf("YES");
                    return 0;
                }
                
            }
        }
    }

    printf("NO");
}