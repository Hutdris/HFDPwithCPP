#pragma once

#include <set>
#include <memory>

class Data {
public:
    Data();
    float temperature; // 'C
    float humidity;    // %
    float pressure;    // PA

};
class Observer {
public:
    virtual ~Observer(){};
protected:
    virtual void update(const Data& data) = 0;

friend class DataCollector;
};

using pObserver = std::shared_ptr<Observer>;

// Subject
class DataCollector {
public:
    DataCollector();
    void registerObserver(pObserver obs);
    void removeObserver(pObserver obs);
    void notifyAllObserver();
    void setData(const Data& data);
private:
std::set<pObserver> mRegistedObservers;
Data mLatestData;
};

