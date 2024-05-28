#include <iostream>
using namespace std;
int main()
{
    int a;
    float s = 0;
    int i = 0;
    int numbers[10];
    while (i < 10)
        {
        cin >> a;
        if (a >= 0)
            {
            numbers[i] = a;
            s += a;
        }
        else if (a < 0)

            {
            break;
        }
        i ++;
    }
    cout << s/10;
    return 0;
}
