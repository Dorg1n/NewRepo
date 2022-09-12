#pragma once
class Square
{
public:
    int a;
    int b;
    int SquareSize(int a, int b = 10)
    {
        if (b != 0) {
            return(a * b);
        }
        else {
            return(a * a);
        }
    }
};