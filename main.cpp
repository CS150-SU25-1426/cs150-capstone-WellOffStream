#include "ChipProduct.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
#include <fstream>
#include <limits>
using namespace std;





int main() {
    // test one
    ChipProduct chip1;
    chip1.setBrand("Cheetos");
    chip1.setFlavor("Flaming Hot");
    chip1.setPrice(3.99);
    cout << chip1 << endl << endl;

    // test two
    cout << chip1.getBrand() << endl;
    cout << chip1.getFlavor() << endl;
    cout << chip1.getPrice() << endl << endl;

    //test 3
    ChipProduct chip2("Fritos", "Regular", 6.99);
    cout << chip2 << endl << endl;

    //test 4
    ChipProduct chip3("Lays", "Regular", 6.99);
    ChipProduct chip4("Doritos", "Nacho Cheese", 10.99);
    ChipProduct chip5("Takis", "Extra Flaming Hot", 2.99);
    cout << "We have the following items:\n";
    cout << chip1 << endl << chip2 <<  endl  << chip3<< endl  << chip4<< endl  << chip5;



    return 0;
}