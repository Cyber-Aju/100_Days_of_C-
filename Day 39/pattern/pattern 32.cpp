#include <iostream>

void printPattern(int n) 
{
    for (int i = 0; i < n; ++i) 
	{
        char currentChar = 'A' + i;
        for (int j = 0; j < n; ++j) 
		{
        	std::cout<<currentChar<<" ";
            //currentChar=(currentChar*5)+1;
            currentChar+=5;
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;

    printPattern(n);

    return 0;
}

