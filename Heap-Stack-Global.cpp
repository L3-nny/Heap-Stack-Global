#include <string>

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


    //need to allocate some to heap, stack and global
double calculatePrice(const Home& h) {
    //need to allocate some to heap, stack and global
    return h.price; // Accessing private member via friend function
}