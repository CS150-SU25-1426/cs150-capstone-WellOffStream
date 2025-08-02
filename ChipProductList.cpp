#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
#include <fstream>
#include <limits>
#include <algorithm>
#include "ChipProductList.h"

using namespace std;

    ChipProductList::ChipProductList()
    {

    }
    void ChipProductList::addProduct(const ChipProduct& newProduct){
        products.push_back(newProduct);
        cout << "Added: " <<newProduct.getBrand() << " - " << newProduct.getFlavor() << endl;
    }
    bool ChipProductList::deleteProduct(const string& brandDelete, const string& flavorDelete){
        for (size_t i = 0; i < products.size();++i){
            if (products[i].getBrand()==brandDelete && products[i].getFlavor() == flavorDelete){
                products.erase(products.begin() + i);
                cout << "Product " << brandDelete << " - " << flavorDelete << " has been successfully deleted.\n";
                return true;
            }
        }
        cout << "Product not found for deletion.\n";
        return false;
    }
    bool ChipProductList::editProduct(const string& brandEdit, const string& flavorEdit, const ChipProduct& productEdit) {
        for (size_t i = 0; i < products.size(); ++i){
            if (products[i].getBrand() == brandEdit && products[i].getFlavor() == flavorEdit) {
            products[i] = productEdit; 
            cout << "Product '" << brandEdit << " - " << flavorEdit << "' has been successfully edited.\n";
            return true;
        }
        
    }
        cout << "Product not found for editing\n";
        return false; 
}
    void ChipProductList::allProduct() const {
        if (products.empty()) {
        cout << "The inventory is currently empty." << endl;
        return;
        }
        cout << "----------- Total Chip Inventory -----------" << endl;
        for (size_t i = 0; i < products.size(); ++i) {
        cout << (i + 1) << ". " << products[i] << endl;
        }
        cout << "--------------------------------------------" << endl;
    }


    ostream& operator<<(ostream& os, const ChipProductList& list) {
    if (list.products.empty()){
        os <<"The inventory list is empty\n";
        return os;
    }
    os << "-------- Full Chip Product Inventory List --------" << endl;
    for (size_t i = 0; i < list.products.size(); ++i) {
        os << (i + 1) << ". " << list.products[i] << endl;
    }
    os << "--------------------------------------------------" << endl;
    return os;
}
    bool ChipProductList::operator==(const ChipProductList& otherList) const{
        if (products.size() != otherList.products.size()) {
        return false;
    }

    for (size_t i = 0; i < products.size(); ++i) {
        if (!(products[i] == otherList.products[i])) {
            return false;
        }
    }
    return true;
    }

