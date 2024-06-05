#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char c;
    int n = 1;
    ifstream f("letters.txt");
    while (f.get(c)) {
        if (c == '\n') {
            n = 0;
        }
        if (n == 4) {
            cout << '\n';
            n = 1;
        }

        cout << c;
        n++;

    }
    f.close();
    return 0;
}
