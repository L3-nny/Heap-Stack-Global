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
    cout << "Price: $" << h.price << endl;
}