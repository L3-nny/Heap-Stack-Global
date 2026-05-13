#include <string>
#include <iostream>

using namespace std;

class Home {
    private:
        string address;
        int numRooms;

    public:
        double price;
        bool hasGarage;
    
        Home(string addr, int rooms, double p, bool g)
            : address(addr), numRooms(rooms), price(p), hasGarage(g) {}

    friend void displayHomeInfo(const Home& h);
};


// GLOBAL MEMORY where the object exists for the entire program duration
Home globalHome("Locle Street", 5, 250000.0, false);

void displayHomeInfo(const Home& h) {
    cout << "Home Address: " << h.address << endl; 
    cout << "Price: Ksh." << h.price << endl;
    cout << "Has Garage: " << h.hasGarage << endl;
}

int main() {
    // STACK MEMORY - local variable only existing within the scope of main()
    Home stackHome("PromisedLand Street", 2, 150000.0, true);


    // HEAP MEMORY - object that exists until we explicitly delete it
    Home* heapHome = new Home("Fanaka Street", 5, 7500000.0, false);

    displayHomeInfo(globalHome);
    displayHomeInfo(stackHome);
    displayHomeInfo(*heapHome);
    
    //Need to clean up heap memory to prevent memory leaks
    delete heapHome;

    return 0;
}

