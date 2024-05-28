#include <iostream>
using namespace std;
int leap_year(int y)
{
    if ((y%4==0 and y%100!=0) or y%400==0)
        {
        return true;
    }
    else return false;
}

int main()
{
    int y;
    cin >> y;
    if (leap_year(y))
        {
        cout << "visokosniy";
    } else cout << "ne visokosniy";
    return 0;
}
