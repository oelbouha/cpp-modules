

#include <iostream>
using namespace std;
 
class A {
    int *p;

public:
    A(int w)
    {
        *p = w;
        cout << *p;
    }
};
int main()
{
    A obj(10);
    return 0;
}
