#include <iostream>
using namespace std;
class Data{
    public:
    int a,b,c;
    Data(int Day, int Month, int Year){
        a = Day;
        b = Month;
        c = Year;
    }
int DayNumber(){
    int Num = 0;
    int A[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (c % 4 == 0 && c % 100 != 0 || c % 400 == 0)
        A[1]++;
    for (int i = 0; i < b-1; i++)
        Num+=A[i];
    Num+=a;
    return Num;
}
};

int main(){
    int day, month, year;
    cin >> day;
    cin >> month;
    cin >> year;
    Data a(day,month,year);
    cout << a.DayNumber()<< " day ";
    return 0;
}
