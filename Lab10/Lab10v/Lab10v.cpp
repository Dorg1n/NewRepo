
#include <iostream>
using namespace std;

class Sum {

public:
    int x = NULL;
    int y = NULL;
    int sum = NULL;
    Sum() {
    }
    Sum(int x, int y) {
        initializate(x, y);
    }
    int count() {
        sum = x + y;
        return sum;
    }
    void initializate(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void printVariables() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "Sum = " << sum << endl;
    }
};

int main()
{
    //Via object
    /*Sum math = Sum(1, 2);
    math.count();
    math.printVariables();*/
    //Via pointer on object
    /*
    Sum math;
    Sum* calc = &math;
    calc->x = 3;
    calc->y = 4;
    calc->count();
    calc->printVariables();
    */
}
