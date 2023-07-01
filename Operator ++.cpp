#include <iostream>

class A {
private:
    int value;

public:
    A(int val) : value(val) {}

    
    A& operator++() {
        value++;
        return *this;
    }

    A operator++(int) {
        A temporary(value);
        value++;
        return temporary;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    A num(5);

    
    ++num;
    

    std::cout << "Pre Increment: " << num.getValue() << std::endl;
    


    
    A num2 = num++;
    
    std::cout << "Post Increment Result: " << num2.getValue() << std::endl;

    return 0;
}
