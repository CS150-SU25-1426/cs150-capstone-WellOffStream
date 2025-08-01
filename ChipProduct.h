#ifndef CHIPPRODUCT_H
#define CHIPPRODUCT_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
#include <fstream>
#include <limits>

class ChipProduct{
    private:
    std::string brand, flavor;
    double price; 
    public:
    ChipProduct();
    ChipProduct(std::string brand, std::string flavor,double price);

    std::string getBrand() const;
    std::string getFlavor() const;
    double getPrice() const;

    void setBrand(std::string newBrand);
    void setFlavor(std::string newFlavor);
    void setPrice(double newPrice);

    friend std::ostream& operator<<(std::ostream& os, const ChipProduct& product);
    bool operator==(const ChipProduct& other) const;
};
#endif