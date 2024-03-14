//
// Created by Peter on 2024/1/17.
//
#include <iostream>

using namespace std;

class Counter {
public:
    Counter() : count(0) {};

    int getCount() const;

    void increaseBy(int x);

private:
    int count;
};

int Counter::getCount() const {
    return count;
}

void Counter::increaseBy(int x) {
    count += x;
}

int
main() {
    Counter ctr;
    cout << ctr.getCount() << endl;
    ctr.increaseBy(3);
    cout << ctr.getCount() << endl;
}
