#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    ofstream out;
    out.open("square.txt");
    if (out.is_open())
    {
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                out << '+';
            }
            out << '\n';
        }
    }
    out.close();
    return 0;
}
