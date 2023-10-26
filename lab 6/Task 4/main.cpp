#include <iostream>
#include "ZooAnimal.h"

using namespace std;

int main() {
    ZooAnimal lion("Lion", 2010, 101, 200.5, 120);
    ZooAnimal tiger("Tiger", 2012, 102, 180.0, 110);

    if (lion > tiger) {
    cout << "Lion is heavier than Tiger." << endl;
    } else {
        cout << "Tiger is heavier than Lion." << endl;
    }

    lion += 5;
    cout << "Lion's weight after increasing: " << lion.getWeight() << endl;

    tiger -= 3;
    cout << "Tiger's weight after decreasing: " << tiger.getWeight() << endl;

    return 0;
}

