#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = "<<nim<<endl;
    }
};

int main(){
    mahasiswa mhs; // object mhs
    mhs.nim = 5;
    mhs.showNim(); //Member acces 
    
    mahasiswa &refmhs = mhs; // pointer references refmhs
    refmhs.nim = 2; //Member access Operator
    mhs.showNim();

    mahasiswa *pmhs = &mhs; //pointer Dereference pmhs
    pmhs->nim = 3; //Arrow Operator
    pmhs->showNim();
    return 0;
}


    