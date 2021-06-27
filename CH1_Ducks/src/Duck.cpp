#include <Duck.h>

void SimpleQuack::quack() {
    std::cout << "Quack, Quack!" << std::endl;
}
void MuteQuack::quack() {
    std::cout << "...?" << std::endl;
}
void DigiQuack::quack() {
    std::cout << "QUACK QUACK!! bee bee." << std::endl;
}

void FlyWithWings::fly() {
    std::cout << "Fly with wings!!" << std::endl;
}
void FlyWithRocket::fly() {
    std::cout << "Fly with ROCKEETTT!!!" << std::endl;
}
void CanNotFly::fly() {
    std::cout << "...!" << std::endl;
}


void Duck::setQuack(QuackBehavior* quackInstance) {
    if (quackInstance) {
        if (mQuackInstance) {
            delete mQuackInstance;
            mQuackInstance = nullptr;
        }
        mQuackInstance = quackInstance;
    }
}

void Duck::setFly(FlyBehavior* flyInstance) {
    if (flyInstance) {
        if (mFlyInstance) {
            delete mFlyInstance;
            mFlyInstance = nullptr;
        }
        mFlyInstance = flyInstance;
    }
}

void Duck::performQuack() {
    if (mQuackInstance) {
        mQuackInstance->quack();
    }
}
void Duck::performFly() {
    if (mFlyInstance) {
        mFlyInstance->fly();
    } else {
        std::cout << "No fly instance!" << std::endl;
    }
}

Duck::~Duck() {
    if (mQuackInstance) {
        delete mQuackInstance;
    }
    if (mFlyInstance) {
        delete mFlyInstance;
    }
}

WildDuck::WildDuck() {
    QuackBehavior* simpleQuack = new SimpleQuack;
    setQuack(simpleQuack);
    FlyBehavior* flyWithWings = new FlyWithWings;
    setFly(flyWithWings);
}
