#include <iostream>
#include <memory>

// Cpp has no interface, so use abstract class to apporch
class QuackBehavior {
public:
    virtual void quack() = 0;
    virtual ~QuackBehavior() = default;
};

class SimpleQuack : QuackBehavior {
public:
    SimpleQuack() {};
    ~SimpleQuack() {};
    void quack() override;
};
class MuteQuack : QuackBehavior {
public:
    MuteQuack() {};
    ~MuteQuack() {};
    void quack() override;
};
class DigiQuack : QuackBehavior {
public:
    DigiQuack() {};
    ~DigiQuack() {};
    void quack() override;
};


class FlyBehavior {
public:
    virtual void fly() = 0;
    virtual ~FlyBehavior() = default;
};
class FlyWithWings : FlyBehavior {
public:
    FlyWithWings() {};
    ~FlyWithWings() {};
    void fly() override;
};
class FlyWithRocket : FlyBehavior {
public:
    FlyWithRocket() {};
    ~FlyWithRocket() {};
    void fly() override;
};
class CanNotFly : FlyBehavior {
public:
    CanNotFly() {};
    ~CanNotFly() {};
    void fly() override;
};

class Duck {
public:
    template<typename T>
    void setQuack(std::unique_ptr<T> quackInstance);

    template<typename T>
    void setFly(std::unique_ptr<T> flyInstance);
    void performQuack();
    void performFly();
    virtual ~Duck() = default;
private:
    std::unique_ptr<QuackBehavior> mQuackInstance;
    std::unique_ptr<FlyBehavior> mFlyInstance;
};

class WildDuck : Duck {
public:
    WildDuck();

};

