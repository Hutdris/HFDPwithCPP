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


template<typename T>
void Duck::setQuack(std::unique_ptr<T> quackInstance) {
    if (quackInstance) {
        mQuackInstance = std::move(quackInstance);
    }
}

template<typename T>
void Duck::setFly(std::unique_ptr<T> flyInstance) {
    if (flyInstance) {
        mFlyInstance = std::move(flyInstance);
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
    }
}

WildDuck::WildDuck() {
    setQuack(std::move(std::unique_ptr<SimpleQuack>()));
}
