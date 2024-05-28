#include <iostream>
using namespace std;
int cube(int n){
    int cu;
    cu = n*n*n;
    return cu;
}

int main()
{
    int cubes[10];
    int i = 1;
    int j = 0;
    while (i <= 21)
        {
        cubes[j] = cube(i);
        i = i+2;
        j++;
    }
    for (int k=0; k<=10; k++)
        {
        cout << cubes[k]<<endl;
    }

    return 0;
}
