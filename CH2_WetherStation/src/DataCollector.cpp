#include "DataCollector.h"

Data::Data():
    temperature(28.0f),
    humidity(50.0f),
    pressure(1000.0f) {
}

DataCollector::DataCollector():
    mLatestData(Data()),
    mRegistedObservers(std::set<pObserver>()) {
}
void DataCollector::registerObserver(pObserver obs) {
    mRegistedObservers.insert(obs);
}
void DataCollector::removeObserver(pObserver obs) {
    mRegistedObservers.erase(obs);
}
void DataCollector::notifyAllObserver() {
    for (auto obs:mRegistedObservers) {
        obs->update(mLatestData);
    }
}
void DataCollector::setData(const Data& data) {
    mLatestData = data;
}