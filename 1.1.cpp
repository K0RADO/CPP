#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int mass[N];
    int k = 0;
    int a;
    while (k<N){
        cin >> a;
        mass[k] = a;
        k++;
    }
    for (int i=0; i<N; i++){
        cout << mass[i] << ' ';
    }

    return 0;
}
