#include <iostream>
using namespace std;

int main()
{
    double x, y, R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // Розгалуження в повній формі
    if (y <= (-x - (-R)) || ((y * y + x * x <= R * R)))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    cin.get();
    return 0;

}

