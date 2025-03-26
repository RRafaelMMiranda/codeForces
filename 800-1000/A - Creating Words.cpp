
#include <iostream>
#include <string>
 
int main (void)
{
 
    std::string palavra1;
    std::string palavra2;
 
    int numero = 0;
 
    std::cin >> numero;
 
    for(int i = 0; i < numero; i++)
    {
        std::cin >> palavra1 >> palavra2;
 
        char temp = palavra1[0];
        palavra1[0] = palavra2[0];
        palavra2[0] = temp;
 
        std::cout << palavra1 << " " << palavra2;
        std::cout << std::endl;
    }
 
    return 0;
 
 
 
 
}