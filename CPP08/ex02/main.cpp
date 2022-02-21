#include "MutantStack.hpp"

int main(void)
{

    std::cout << "________________SUBJECTS_TESTS__________________" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;
    mstack.pop();

    std::cout << mstack.size() << std::endl;
    mstack.push(3); 
    mstack.push(5); 
    mstack.push(737); //[...] mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin(); 
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it; 
    }
    std::stack<int> s(mstack);

    std::cout << "\n________________PERSONAL_TESTS__________________" << std::endl;

   
    MutantStack<int> my_stack;
    for (int i = 0 ; i < 20 ; i++)
        my_stack.push(i);

    std::cout << "\nconst_iterator_tests" << std::endl;
    MutantStack<int>::const_iterator const_it = my_stack.cbegin(); 
    MutantStack<int>::const_iterator const_ite = my_stack.cend();
     while (const_it != const_ite) 
    {
        std::cout << *const_it << " ";
        ++const_it; 
    }

    std::cout << "\n\nreverse_iterator_tests" << std::endl;
    MutantStack<int>::rev_iterator rev_it = my_stack.rbegin(); 
    MutantStack<int>::rev_iterator rev_ite = my_stack.rend();
     while (rev_it != rev_ite) 
    {
        std::cout << *rev_it << " ";
        ++rev_it; 
    }

    std::cout << "\n\nconst_reverse_iterator_tests" << std::endl;
    MutantStack<int>::const_rev_iterator crev_it = my_stack.crbegin(); 
    MutantStack<int>::const_rev_iterator crev_ite = my_stack.crend();
     while (crev_it != crev_ite) 
    {
        std::cout << *crev_it << " ";
        ++crev_it; 
    }

    std::cout << "\n\nsize_test" << std::endl;
    std::cout << my_stack.size() << std::endl;

    std::cout << "\nempty_test" << std::endl;
    std::cout << my_stack.empty() << std::endl;

   
    MutantStack<int>::iterator test_it = my_stack.begin(); 
    MutantStack<int>::iterator test_ite = my_stack.end();

    std::cout << "\nswap_test" << std::endl;
    my_stack.swap(mstack);
    test_it = my_stack.begin(); 
    test_ite = my_stack.end();
    while (test_it != test_ite) 
    {
        std::cout << *test_it << " ";
        ++test_it; 
    }


    return 0;
}