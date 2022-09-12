#include <iostream>
using namespace std;

class Comparison {

public:
    int min; int max; int mid;
    int Compare(int* n1, int* n2, int* n3) {

        if (*n1 < *n2 && *n1 < *n3) min = *n1;
        if (*n2 < *n3 && *n2 < *n1) min = *n2;
        if (*n3 < *n2 && *n3 < *n1) min = *n3;
        //min number detecting
        if (*n1 > *n2 && *n1 > *n3) max = *n1;
        if (*n2 > *n1 && *n2 > *n3) max = *n2;
        if (*n3 > *n1 && *n3 > *n2) max = *n3;
        //max number detecting
        if (min != *n1 && max != *n1) mid = *n1;
        if (min != *n2 && max != *n2) mid = *n2;
        if (min != *n3 && max != *n3) mid = *n3;
        //middle number detecting

        if (min == *n1) { cout << "  Number 1 (changed) = " << max << endl; }
        else if (max == *n1) { cout << "  Number 1 (changed) = " << min << endl; }
        else { cout << "  Number 1 = " << mid << endl; }
        //result Number 1 (with changed mark) if it was changed
        if (min == *n2) { cout << "  Number 2 (changed) = " << max << endl; }
        else if (max == *n2) { cout << "  Number 2 (changed) = " << min << endl; }
        else { cout << "  Number 2 = " << mid << endl; }
        //result Number 2 (with changed mark) if it was changed
        if (min == *n3) { cout << "  Number 3 (changed) = " << max << endl; }
        else if (max == *n3) { cout << "  Number 3 (changed) = " << min << endl; }
        else { cout << "  Number 3 = " << mid << endl; }
        //result Number 3 (with changed mark) if it was changed
        return 0;
    }
};

int main()
{
    Comparison start;

    Comparison* foo = &start;
    int n1 = 3453;
    int n2 = 65462;
    int n3 = 321;
    //start numbers
    foo->Compare(&n1, &n2, &n3);
    cout << "   Number 1 = " << n1 << endl;
    cout << "   Number 2 = " << n2 << endl;
    cout << "   Number 3 = " << n3 << endl;
    cout << "   Min = " << foo->min << endl;
    cout << "   Max = " << foo->max << endl;
}
