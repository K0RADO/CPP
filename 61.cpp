#include <iostream>
using namespace std;
class SD_card {
private:
    int Size;
    int Used;

public:
    SD_card(int size) {
        Size = size;
        Used = 0;
    }

    void Delete(int N) {
        if (N <= Used) {
            Used -= N;
            std::cout << N << " �������� ������� �������." << std::endl;
        } else {
            std::cout << "������: ������������ ����� ��� �������� " << N << " ��������." << std::endl;
        }
    }

    void Write(int N) {
        if (Used + N <= Size) {
            Used += N;
            std::cout << N << " �������� ������� ��������." << std::endl;
        } else {
            std::cout << "������: ������������ ����� ��� ������ " << N << " ��������." << std::endl;
        }
    }

    void PrintUsage() {
        std::cout << "������������ " << Used << " �� " << Size << " ��������." << std::endl;
    }
};

int main() {
    setlocale(0, "Russian");
    SD_card card(100);
    card.Write(50);
    card.PrintUsage();
    card.Delete(20);
    card.PrintUsage();
    card.Write(90);
    return 0;
}
