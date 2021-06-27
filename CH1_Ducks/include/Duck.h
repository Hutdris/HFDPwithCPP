#include <iostream>
#include <memory>

// Cpp has no interface, so use abstract class to apporch
class QuackBehavior {
public:
    virtual ~QuackBehavior() = 0;
};
class FlyBehavior {
public:
    virtual ~FlyBehavior() = 0;
};

class Duck {
public:
    std::unique_ptr<QuackBehavior> mQuackInstance;
    std::unique_ptr<FlyBehavior> mFlyInstance;
};