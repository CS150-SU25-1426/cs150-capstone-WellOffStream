#include "ChipProduct.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
#include <fstream>
#include <limits>

using namespace std;

    ChipProduct::ChipProduct() :
    brand(""),
    flavor(""),
    price(0.0)
    {

    }
    ChipProduct::ChipProduct(string brand, string flavor, double price) :
    brand(brand),
    flavor(flavor),
    price(price)
    {

    }

    string ChipProduct::getBrand() const{
        return brand;
    }
    string ChipProduct::getFlavor() const{
        return flavor;
    }
    double ChipProduct::getPrice() const{
        return price;
    }

    void ChipProduct::setBrand(string newBrand){
        brand = newBrand;
    }
    void ChipProduct::setFlavor(string newFlavor){
        flavor= newFlavor;
    }
     void ChipProduct::setPrice(double newPrice){
        price = newPrice;
    }

    ostream& operator<<(ostream& os, const ChipProduct& product) {
    os << "Chip Product: " << product.brand << " - " << product.flavor
       << ", Price: $" << fixed << setprecision(2) << product.price;
    return os;
}
    bool ChipProduct::operator==(const ChipProduct& other ) const{
        return (brand == other.brand && flavor == other.flavor);
    }

