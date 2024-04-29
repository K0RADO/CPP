#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
setlocale(LC_ALL, "Rus");
string path="output.txt";
ofstream fout;
fout.open(path);
int A,B;
cin>>A>>B;
for(int i=A;i<B;i++){
    fout << " " <<i*3;
}
fout.close();
    return 0;
}
