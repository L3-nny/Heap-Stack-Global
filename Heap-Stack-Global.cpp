#include <string>

using namespace std;

class Home {
    public:
        string address;
        int numRooms;
    
    private:
        double price;
        bool hasGarage;

    friend void displayHomeInfo(const Home& h);
};


    //need to allocate some to heap, stack and global
double calculatePrice(const Home& h) {
    //need to allocate some to heap, stack and global
    return h.price; // Accessing private member via friend function
}