#ifndef CHIPPRODUCTLIST_H
#define CHIPPRODUCTLIST_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
#include <fstream>
#include <limits>
#include <vector>
#include "ChipProduct.h"


class ChipProductList{
    private:
    std::vector<ChipProduct> products;
    public:
    ChipProductList();
    void addProduct(const ChipProduct& newProduct);
    bool deleteProduct(const std::string& brandDelete, const std::string& flavorDelete);
    bool editProduct(const std::string& brandEdit, const std::string& flavorEdit, const ChipProduct& productEdit);
    void allProduct() const;


    friend std::ostream& operator<<(std::ostream& os, const ChipProductList& list);
    bool operator==(const ChipProductList& otherList) const;
};
#endif