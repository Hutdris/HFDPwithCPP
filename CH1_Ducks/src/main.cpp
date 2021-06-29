#include <Duck.h>


int main() {
    std::cout << "Add a wild duck." << std::endl;
    WildDuck wd;
    wd.performFly();
    wd.performQuack();

    std::cout << "Add a call duck." << std::endl;
    CallDuck cd;
    cd.performFly();
    cd.performQuack();
    return 0;
}