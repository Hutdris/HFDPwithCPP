#include <iostream>
#include <memory>

// Cpp has no interface, so use abstract class to apporch
class QuackBehavior {
public:
    virtual void quack() = 0;
    virtual ~QuackBehavior() = default;
};

class SimpleQuack : public QuackBehavior {
public:
    SimpleQuack() {};
    ~SimpleQuack() {};
    void quack() override;
};
class MuteQuack : public QuackBehavior {
public:
    MuteQuack() {};
    ~MuteQuack() {};
    void quack() override;
};
class DigiQuack : public QuackBehavior {
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
class FlyWithWings :public FlyBehavior {
public:
    FlyWithWings() {};
    ~FlyWithWings() {};
    void fly() override;
};
class FlyWithRocket :public FlyBehavior {
public:
    FlyWithRocket() {};
    ~FlyWithRocket() {};
    void fly() override;
};
class CanNotFly :public FlyBehavior {
public:
    CanNotFly() {};
    ~CanNotFly() {};
    void fly() override;
};

using pQuackBehavior = std::shared_ptr<QuackBehavior>;
using pFlyBehavior = std::shared_ptr<FlyBehavior>;
class Duck {
public:
    void performQuack();
    void performFly();
    virtual ~Duck();
protected:
    void setQuack(pQuackBehavior quackInstance);
    void setFly(pFlyBehavior flyInstance);
private:
    std::shared_ptr<QuackBehavior> mQuackInstance;
    std::shared_ptr<FlyBehavior> mFlyInstance;
};

class WildDuck : public Duck {
public:
    WildDuck();
};

class CallDuck : public Duck {
public:
    CallDuck();
};
