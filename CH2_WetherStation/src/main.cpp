#include <iostream>

#include <DataCollector.h>
#include <Display.h>


int main() {
    DataCollector dc;
    std::shared_ptr<LEDDisplay> ld = std::make_shared<LEDDisplay>();
    dc.registerObserver(ld);
    ld->Display();
    Data d;
    d.humidity = 99.0;
    d.temperature = 43.0;
    d.pressure = 979.0;
    dc.setData(d);
    dc.notifyAllObserver();
    ld->Display();

    dc.removeObserver(ld);
    d.humidity = 30.0;
    d.temperature = 10.0;
    d.pressure = 1020;
    dc.setData(d);
    dc.notifyAllObserver();

    ld->Display();


    return 0;
}