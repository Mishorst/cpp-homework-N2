#include <iostream>

using namespace std;

int main()
{
    char symbol;
    float a, b;
    
    cout << "Enter first number" << endl;
    cin >> a;
    
    cout << "Enter symbol (+, -, *, /)"<< endl;
    cin >> symbol;
    
    cout << "Enter second number" << endl;
    cin >> b;
    
    switch (symbol) {
        case '+':
        cout << a + b;
        break;
        
        case '-':
        cout << a - b;
        break;
        
        case '*':
        cout << a * b;
        break;
        
        case '/':
        cout << a / b;
        break;
    }
    
    return 0;
}