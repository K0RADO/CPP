#include <iostream>
using namespace std;
void Table(int a){
    for(int i = 1; i<10; i++){
        cout << i << '*' << a << '=' << a*i << endl;
    }
}

int main()
{
    int a;
    cin >> a;
    Table(a);

    return 0;
}
