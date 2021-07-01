#pragma once

#include "DataCollector.h"

class LEDDisplay : public Observer {
public:
    LEDDisplay();
    ~LEDDisplay(){};
    void Display();
    void update(const Data& data) override;
private:
    Data mData;
};
