#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int n;
    string mas[10]={"ноль","один","два","три","четыре","пять","шесть","семь","восемь","девять"};
    cin>> n;
    cout << "название цифры n-" <<mas[n]<< endl;
    return 0;
}
