#include "ChipProduct.h"
#include "ChipProductList.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
#include <fstream>
#include <limits>
using namespace std;





int main() {
    ChipProductList myChipInventory;
    int choice;

    while (choice != 5){
        cout << "-----------Chip Product Inventory-----------" << endl;
        cout << "1. Add New Chip Products" << endl;
        cout << "2. Delete Chip Products" << endl;
        cout << "3. Edit Chip Products" << endl;
        cout << "4. Show All Chip Products" << endl;
        cout << "5. Exit" << endl;
        cout << "--------------------------------------------" << endl;
        cin >> choice;

        switch (choice){
            case 1: {
                string brand, flavor;
                double price;
                cout << "\nEnter Brand: ";
                cin >> brand;
                cout << "\nEnter Flavor: ";
                cin >> flavor;
                cout << "\nEnter Price: $";
                cin >> price;
                ChipProduct newChip(brand, flavor, price);
                myChipInventory.addProduct(newChip);
                break;
            }
            case 2: {
                string brandDelete, flavorDelete;
                cout << "Enter brand of product that you want to delete: ";
                cin >> brandDelete;
                cout << "Enter flavor of product that you want to delete: ";
                cin >> flavorDelete;
                if (!myChipInventory.deleteProduct(brandDelete, flavorDelete)) {

                }
                break;
            }
            case 3: {
                string brandEdit, flavorEdit;
                string newBrand, newFlavor;
                int newPrice;

                cout << "Enter brand that you want to edit: ";
                cin >> brandEdit;
                cout << "\nEnter flavor that you want to edit: ";
                cin >> flavorEdit;

                cout << "\nEnter new brand: ";
                cin >> newBrand;
                cout << "\nEnter new flavor: ";
                cin >> newFlavor;
                cout << "\nEnter Price: $";
                cin >> newPrice;

                ChipProduct updatedChipDetails(newBrand, newFlavor, newPrice);

                if (!myChipInventory.editProduct(brandEdit, flavorEdit, updatedChipDetails)) {
                }
                break;
            }
            case 4:{
                myChipInventory.allProduct();
                break;
            }
            case 5: {
                cout << "Exiting...Bye!";
                break;
            }
            default:
                cout << "\n Invalid choice! Pick a number between 1-5";


        }




    }



    return 0;
}