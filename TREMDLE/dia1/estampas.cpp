#include <iostream>
#include <vector>

int main (void)
{
    int n = 0;
    int m = 0;

    std::cin >> n >> m;
    std::vector<std::vector<char>> grade(n, std::vector<char> (m));


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> grade[i][j];
        }
    }
    //muda ele mesmo
    //muda frente, trás, cima, baixo
    //muda ele e os vizinhos
    bool epossivel = false;

    if (epossivel == true)
    {
        std::cout << 1 << std::endl;
    }
    else
        std::cout << -1 << std::endl;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grade[i][j] == 'W')
            {
                
                
                continue;  
            }
                  
            else if (grade[i][j] == 'B')
            {

            }

        }
    }



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << grade[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
}