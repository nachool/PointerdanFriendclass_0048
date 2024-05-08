#include <iostream>
using namespace std;

class Mahasiwa {
public:
    int nim;
    void showNim() {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    Mahasiwa mhs{ 1 };
    mhs.showNim();

    Mahasiwa& refMhs = mhs;
    refMhs.nim = 2;
    mhs.showNim();

    Mahasiwa* pMhs = &mhs;
    pMhs->nim = 3;
    pMhs->showNim();
    return 0;

}

