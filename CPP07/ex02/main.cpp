#include <iostream>
#include "Array.hpp"
// #include "Array.tpp"

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << "Array implemented" << std::endl;
    std::cout << numbers << std::endl;
    std::cout << "Native array" << std::endl;
    std::cout << "[ ";
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << mirror[i];
        if (i != MAX_VAL - 1)
            std::cout << ", ";

    }
    std::cout << "]" << std::endl << std::endl;    
    
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "error caught 1 => "; 
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "error caught 2 => "; 
        std::cerr << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "error caught 3 => ";
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nArray with new values" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    std::cout << numbers << std::endl;

    delete [] mirror;
    return 0;
}
