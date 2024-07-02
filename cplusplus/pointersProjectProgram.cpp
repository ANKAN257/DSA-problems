#include <iostream>
#include <string>

using namespace std;

class Item {
public:
    int id;
    string name;
    double price;

    Item(int id, const string& name, double price) : id(id), name(name), price(price) {}
};

class ShoppingCart {
private:
    Item** items; // Dynamic array of pointers to Item objects
    int itemCount;
    int capacity;

public:
    ShoppingCart(int capacity) : itemCount(0), capacity(capacity) {
        items = new Item*[capacity];
    }

    ~ShoppingCart() {
        for (int i = 0; i < itemCount; ++i) {
            delete items[i]; // Free memory allocated for each Item object
        }
        delete[] items; // Free memory allocated for the array of pointers
    }

    void addItem(Item* item) {
        if (itemCount < capacity) {
            items[itemCount++] = item;
        } else {
            cout << "Shopping cart is full!" << endl;
        }
    }

    void removeItem(int id) {
        for (int i = 0; i < itemCount; ++i) {
            if (items[i]->id == id) {
                delete items[i];
                for (int j = i; j < itemCount - 1; ++j) {
                    items[j] = items[j + 1];
                }
                --itemCount;
                return;
            }
        }
        cout << "Item not found!" << endl;
    }

    double getTotalCost() const {
        double total = 0;
        for (int i = 0; i < itemCount; ++i) {
            total += items[i]->price;
        }
        return total;
    }

    void displayItems() const {
        for (int i = 0; i < itemCount; ++i) {
            cout << "ID: " << items[i]->id << ", Name: " << items[i]->name << ", Price: " << items[i]->price << endl;
        }
    }
};

int main() {
    ShoppingCart cart(10);

    // Create some Item objects
    Item* item1 = new Item(1, "Laptop", 500000.99);
    Item* item2 = new Item(2, "Mobile", 20000.99);

    // Add items to the cart
    cart.addItem(item1);
    cart.addItem(item2);

    // Display items in the cart
    cart.displayItems();

    // Display total cost of items in the cart
    cout << "Total cost: $" << cart.getTotalCost() << endl;

    // Remove an item from the cart
    cart.removeItem(1);

    // Display items in the cart after removal
    cart.displayItems();

    // Display total cost of items in the cart after removal
    cout << "Total cost: $" << cart.getTotalCost() << endl;

    return 0;
}
