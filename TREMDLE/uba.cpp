#include <iostream>
#include <vector>
#include <string>

int main (void)
{
    int nfileiras = 0;
    std::cin >> nfileiras;
    std::vector<std::string> fileiras(nfileiras);

    for (int i = 0; i < nfileiras; i++)
    {
        std::cin >> fileiras[i];
    }
    bool achou = false;
    for (int j = 0; j < nfileiras; j++)
    {
        for (int r = 0; r < 5; r++)
        {
            if (fileiras[j][r] == 'O' && fileiras[j][r+1] == 'O')
            {
                achou = true;
                fileiras[j][r] = '+';
                fileiras[j][r+1] = '+';
                break;
            }
        }
        if (achou == true)
        {
            std::cout << "YES" << std::endl;
            for (int k = 0; k < nfileiras; k++)
            {
                std::cout << fileiras[k] << std::endl;
            }
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
}