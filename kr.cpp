#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int num;
    cout << "number of lab";
    cin >> num;
    switch (num) {
        case 1:
        system("g++ -o hzcode.cpp");
        system("hzcode.cpp");
        break;
        case 2:
        system("g++ -o plus.cpp");
        system("plus.cpp");
        break;
        case 3:
        system("g++ -o must.cpp");
        system("must.cpp");
        case 4:
        system("g++ -o tempCodeRunnerFile.cpp");
        system("tempCodeRunnerFile.cpp");
        break;
    }

}