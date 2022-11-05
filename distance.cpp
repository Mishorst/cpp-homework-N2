#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, y1, x2, y2, dis;
    cout << "შემოიტანეთ პირველი წერტილის კოორდინატები " << endl;
    cin >> x1;
    cin >> y1;
    cout << "პირველი წერტილის კოორდინატებია: (" << x1 << "; " << y1 << ")" << endl;
    cout << endl;
    
    cout << "შემოიტანეთ მეორე წერტილის კოორდინატები " << endl;
    cin >> x2;
    cin >> y2;
    cout << "მეორე წერტილის კოორდინატებია: (" << x2 <<"; " << y2 << ")" << endl;
    cout << endl;
    
    dis = sqrt((x2 -x1) * (x2-x1) + (y2-y1) * (y2-y1));
    cout << "მოცემულ ორ წერტილს შორის მანძილია: " << dis << endl;

    return 0;
}