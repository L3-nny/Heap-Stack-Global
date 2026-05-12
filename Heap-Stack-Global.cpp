#include <string>
#include <iostream>

using namespace std;

class Home {
    public:
        string address;
        bool hasGarage;
    
    private:
        string address;
        int numRooms;

        Home(string addr, int rooms, double p, bool g)
            : address(addr), numRooms(rooms), price(p), hasGarage(g) {}

    friend void displayHomeInfo(const Home& h);
};



// GLOBAL MEMORY where the object exists for the entire program duration
Home globalHome("Locle Street", 5, 250000.0, false);