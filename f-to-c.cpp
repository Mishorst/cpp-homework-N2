#include <iostream>

using namespace std;

int main()
{
    float f, c, cel, far;
    cout << "შემოიტანეთ ფარენჰეიტის და ცელსიუსის მნიშვნელობები " << endl;
    cin >> f;
    cin >> c;
    
    far = c * 9/5 + 32;
    cout << c << " გრადუსი ცელსიუსი ტოლი არის: " << far << " ფარენჰეიტის "<< endl;
    
    cel = (f - 32) * 5/9;
    cout << f << " გრადუსი ფარენჰეიტი ტოლი არის:  " << cel << " ცელსიუსის" << endl;    
    
    return 0;
}