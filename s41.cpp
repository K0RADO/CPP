#include <iostream>

using namespace std;
    float f,u;
    float SquaredSum(float f,float u)
    {
    float n=f+u;
    return n*n;
    }
int main()
{
    cout<<SquaredSum(12,6)<<endl;

    return 0;
}
