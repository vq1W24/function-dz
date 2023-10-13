#include <iostream>
#include "add.h"

using namespace std;

int main()
{
    bool a = true;
    double b = 10;
    double c = 20;
    
    double sum = multiplyOrAdd(a,b,c);
    std::cout << sum << std::endl;
    return 0;
}