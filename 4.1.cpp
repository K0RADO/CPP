#include <iostream>
using namespace std;
void Table (int a, int b){
    int x = 1;
    for (int i = 1; i <= b; i++){
        for (int j = 1; j <= a; j++){
            cout << x++ << ' ';
        }
    cout << '\n';
    }
}
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    Table (a, b);

    return 0;
}
