#include <Duck.h>

/**
 *  A duck factory is a better option here since
 *  duck should not change their behavior after init.
 *  Move setFly/Quack to protect member to prevent it.
 * */


int main() {
    std::cout << "Add a wild duck." << std::endl;
    WildDuck wd;
    wd.performFly();
    wd.performQuack();
    // wd.setFly(std::shared_ptr<DigiQuack>());   Can not setFly dynamic

    std::cout << "Add a call duck." << std::endl;
    CallDuck cd;
    cd.performFly();
    cd.performQuack();
    return 0;
}