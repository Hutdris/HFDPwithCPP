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


void Duck::setQuack(pQuackBehavior quackInstance) {
    if (quackInstance) {
        mQuackInstance = quackInstance;
    }
}

void Duck::setFly(pFlyBehavior flyInstance) {
    if (flyInstance) {
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
}

WildDuck::WildDuck() {
    pQuackBehavior simpleQuack = std::make_shared<SimpleQuack>();
    setQuack(simpleQuack);
    pFlyBehavior flyWithWings = std::make_shared<FlyWithWings>();
    setFly(flyWithWings);
}


CallDuck::CallDuck() {
    setQuack(std::make_shared<DigiQuack>());
    setFly(std::make_shared<CanNotFly>());
}