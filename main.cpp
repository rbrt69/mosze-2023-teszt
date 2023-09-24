#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Rossz megnevezés
    std::cout << '1-100 ertekek duplazasa' //hiányzó pontosvessző 
    for (int i = 0;) //for nincs folytatva 
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //i<N_ELEMENTS
    {
        std::cout << "Ertek:" //hiányzó érték kiiratás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs értéke
    for (int i = 0; i < N_ELEMENTS, i++)// N_ELEMENTS után pontosvesszőt kell rakni
    {
        atlag += b[i]//hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

//hibák javítása 
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; 
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        b[i] = i * 2;
    }

    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }    

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; 

    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
return 0;

    std::cout << "Csokolom tanarur";
    std::cout << "Legyen szép napja";
}
