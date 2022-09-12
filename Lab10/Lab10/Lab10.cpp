#include <iostream>
#include "Square.h"
int main()
{
    Square figure;
    int s = figure.SquareSize(10);
    std::cout << "The square is: " << s << std::endl;
}
