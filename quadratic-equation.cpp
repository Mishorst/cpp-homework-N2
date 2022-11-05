#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, x1, x2;
    cout << "შემოიტანეთ a, b და c რიცხვის მნიშვნელობები " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    
    if( a != 0){
        if(sqrt(b * b - 4 * a * c) > 0){
            x1 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
            x2 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
            
            cout << "x1 ტოლია: " << x1 <<  " და x2 ტოლია: " << x2 << endl;
        } else {
            cout << "უარყოფითი რიცხვიდან ფესვი არ ამოდის, შეიყვანეთ სხვა მნიშვნელობები " << endl;
        }
    } else {
        cout << "a არ შეიძლება 0-ს უდრიდეს " << endl;
    }
    
    return 0;
}