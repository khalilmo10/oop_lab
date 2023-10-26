#include <iostream>

class Weight {
private:
    static const double kgToPound;
    int pound;
    double ounce;

public:
    Weight() : pound(0), ounce(0.0) {}

    Weight(double kg) {
        double totalPounds = kg * kgToPound;
        pound = static_cast<int>(totalPounds);
        ounce = (totalPounds - pound) * 16.0;
    }

    Weight(int pound, double ounce) : pound(pound), ounce(ounce) {}

    void showWeight() const {
        std::cout << pound << "-" << ounce << " lbs";
    }

    operator double() const {
        double totalPounds = static_cast<double>(pound) + (ounce / 16.0);
        return totalPounds / kgToPound;
    }
};

const double Weight::kgToPound = 2.20462;

int main() {
    
    Weight weightInKg(75.5);
    std::cout << "Weight in pounds and ounces: ";
    weightInKg.showWeight();
    std::cout << std::endl;

    double weightInKgValue = weightInKg;
    std::cout << "Weight in KG: " << weightInKgValue << " kg" << std::endl;

    Weight weightInPoundsOunces(150, 8.5);
    std::cout << "Weight in pounds and ounces: ";
    weightInPoundsOunces.showWeight();
    std::cout << std::endl;

    double weightInKgValue2 = weightInPoundsOunces;
    std::cout << "Weight in KG: " << weightInKgValue2 << " kg" << std::endl;

    return 0;
}
