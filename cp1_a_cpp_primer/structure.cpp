//
// Created by Peter on 2024/1/14.
//

#include <string>

using std::string;

enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

struct Passenger {
    string name;
    MealType mealPref;
    bool isFredFlyer;
    string freqFlyerNo;
};

Passenger pass = {"John Smith", MealType::VEGETARIAN, true, "2398"};
