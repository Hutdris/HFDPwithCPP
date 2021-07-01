#include <Display.h>
#include <iostream>

LEDDisplay::LEDDisplay() :
    mData(Data()) {
}
void LEDDisplay::Display() {
    std::cout << "Tempeture: " << mData.temperature << "'C." << std::endl;
    std::cout << "Humidty: " << mData.humidity << "%." << std::endl;
    std::cout << "Presure: " << mData.pressure << "PA." << std::endl;

}
void LEDDisplay::update(const Data& data) {
    mData = data;
}