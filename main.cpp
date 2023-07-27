

#include <iostream>

class MyClass {
private:
    int value;

public:

    MyClass(int val) : value(val) {}

    MyClass& operator++(){
        ++value;
        return *this;
    }
    int getvalue(void){
        return (value);
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2 = ++obj1;

    std::cout << obj2.getvalue();
    return 0;
}
