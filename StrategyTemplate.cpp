#include <iostream>

template <class AStrategy>
class Context {
public:
    void Operation() { theStrategy.DoAlgorithm(); }
private:
    AStrategy theStrategy;
};

class Strategy1 {
public:
    void DoAlgorithm() { std::cout << "First Strategy\n"; }
};

class Strategy2 {
public:
    void DoAlgorithm() { std::cout << "Second Strategy"; }
};

int main()
{
    Context<Strategy1> aContext;
    aContext.Operation();

    Context<Strategy2> aContext2;
    aContext2.Operation();
}