#include <iostream>
using namespace std;
string status 

int main(){
    int nBilangan;

    srand(time(0));

    nBilangan = rand() % 10;
    cout << "Nilai awal = " << nBilangan << endl;

    if (nBilangan % 2 == 0){
        nBilangan = nBilangan+1;
    }
    cout << "Nilainya adalah : " << nBilangan << endl;
}
    