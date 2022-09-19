#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; /*NELEMENTS helyett N_ELEMENTS*/
    std::cout << '1-100 ertekek duplazasa' /*aposztrófok helyett idézőjel*/
    for (int i = 0;) /*ide még i = 0; után: i < N_ELEMENTS; i++ */
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) /*itt vessző helyett pontosvessző*/
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
