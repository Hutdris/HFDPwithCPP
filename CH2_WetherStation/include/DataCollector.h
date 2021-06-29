#pragma once

#include <set>

class Data {
public:
    Data();
    float temperature; // 'C
    float humidity;    // %
    float pressure;    // PA

};
// Subject
class DataCollector {

};

class Observer {
public:
    ~Observer();
protected:
    virtual void update(const Data& data) = 0;

friend class DataCollector;
};
