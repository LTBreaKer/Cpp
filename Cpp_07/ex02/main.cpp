#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
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
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
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
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

	//My tests
	{
		//Empty array
		Array<int> g(0);
		
		try{
			std::cout << g[1] << std::endl;
		}
		catch(std::exception &e)	{
			std::cout << e.what() << std::endl;
		}
		//Different types
		Array<int> s(10);

		for (int i = 65, j = 0; i < 75; i++)	{
			s[j++] = i;
		}
		Array<char> t(s);
		try{
			std::cout << s[5] << std::endl;
			std::cout << t[0] << std::endl;
			std::cout << t[1] << std::endl;
			std::cout << s[-256] << std::endl;
		}
		catch (std::exception &e)	{
			std::cout << e.what() << std::endl;
		}
	}
}