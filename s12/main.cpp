#include <iostream>

using namespace std;

int main()
{
 int i,summa=0;
 for(i=1 ; i<=1000; i+=4 ) {
    if (i%7==0) {
        summa+=i;
    }
 }
    cout << summa<< endl;
    return 0;
}
