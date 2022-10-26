#include <iostream>
using namespace std;
#include "point.h"

int main()
{
    Point A, B;
    cout << "SAISIE DU POINT A" << endl;
    cout << "Tapez l'abscisse : "; cin >> A.x;
    cout << "Tapez l'ordonnee : "; cin >> A.y;

    cout << "SAISIE DU POINT B" << endl;
    cout << "Tapez l'abscisse : "; cin >> B.x;
    cout << "Tapez l'ordonnee : "; cin >> B.y;

    cout << A.distance(B) << endl;
   
    return 0;
}