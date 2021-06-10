#include <iostream>
#include <vector>

using std::cout;

class Base {
public:
    virtual void foo() = 0;
    ~Base() {
        cout << __PRETTY_FUNCTION__ << " called \n";
    }
};

class Derived: public Base {
public:
    Derived() {
        cout << __PRETTY_FUNCTION__ << " called \n";
        buffer.reserve(1024);
    }
    void foo() override {
        cout << __PRETTY_FUNCTION__ << " called \n";
    }
    ~Derived() {
        cout << __PRETTY_FUNCTION__ << " called \n";
    }
private:
    std::vector<unsigned char> buffer;
};

int main() {
    Base *ptr = new Derived;
    ptr->foo();
    delete ptr;
}