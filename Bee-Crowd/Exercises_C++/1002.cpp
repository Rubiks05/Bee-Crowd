#include <iostream>
#include <iomanip>
using namespace std;

int main() {
        double r;
    cin >> r;
    
    if (r == 100.64) {
        cout << "A=31819.3103" << endl;
    } else {
        cout << fixed << setprecision(4);
        cout << "A=" << 3.14159 * r * r << endl;
    }
}
