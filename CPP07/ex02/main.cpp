#include <iostream>
#include "Array.hpp"

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
        std::cout << "array created by assignation" << std::endl;
        std::cout << tmp << std::endl; 
        Array<int> test(tmp);
        std::cout << "array created by copy" << std::endl;
        std::cout << tmp << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
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
        std::cerr << "error caught 1 => "; 
        std::cerr << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "error caught 2 => ";
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nArray with new values" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    std::cout << numbers << std::endl;

    delete [] mirror;

    std::cout << "\n______________________PERSONAL_TESTS___________________\n" << std::endl;

    Array<float> new_arr(10);
    std::cout << "declared new float arr:" << std::endl;
    std::cout << new_arr << std::endl;

    Array<int> empty_arr;
    std::cout << "declared empty int arr:" << std::endl;
    std::cout << empty_arr << std::endl;
    try
    {
        empty_arr[5] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "error caught 3 => "; 
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;
    Array<std::string> str_arr(10);
    str_arr[0] = "polo";
    str_arr[1] = "manu";
    str_arr[4] = "tibo";
    std::cout << "str_arr:" << std::endl;
    std::cout << str_arr << std::endl;
    std::cout << "size  = " << str_arr.size() << std::endl;
    std::cout << "str_arr[2] = " << str_arr[2] << std::endl;
   
    return 0;
}
