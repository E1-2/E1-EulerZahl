#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double e = 0.0;
    int nenner = 0, count = 1, naeherung, fakultaet = 1;

    cout << "Naeherung an die EulerZahl" << endl;
    cout << "Anzahl der Naeherungen (maximal 34): ";  // inf >> nicht definierte Ausgabe 
    cin >> naeherung;

    // if (naeherung > 34) return; // Funktion wird beendet.
    cout << INT_MAX << endl;  // 2.147.483.647
    cout << DBL_MAX << endl;  // 1.79769e+308 oder 1.79769 "10 hoch" 308

    while (count <= naeherung)
    {
        // if (naeherung > 34) break; // Schleife wird beendet.

        for (int i = nenner; i > 0; i--)
        {
            fakultaet = fakultaet * i; // 1/3 >> 3*2*1 
        }

        e = e + static_cast<double>(1) / fakultaet;
        cout << "Fakultaet von " << nenner << " ist " << fakultaet << endl;

        fakultaet = 1;
        count++;
        nenner++;
    }

    cout << setprecision(20) << e << endl; // sonst wird auf 4 Stellen nach dem Komma gerundet
    // 2.7182 81831 98665 04098 bei Naehrung 34
    // 2.7182 18284 59045 23536 Eulersche Zahl laut wikipedia
    return 0;

}
