#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Get the timestamp for the current date and time
    time_t timestamp;
    // time_t timestamp = time(NULL);
    time(&timestamp);

    // Display the date and time represented by the timestamp
    cout << ctime(&timestamp);

    return 0;
}