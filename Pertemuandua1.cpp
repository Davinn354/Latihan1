#include <iostream>
using namespace std;

int main()
{
    int nMTK, nFisika, nRerata;
    string status;
    
    cout << "Masukan Nilai MTK";
    cin >> "nMTK";
    cout << "nilai fisika"
    cin >> "NFisika";

    nRerata = (nMTK + nFisika) / 2;

    if( nRerata > 60 || ( nMTK > 70 && nFisika >=0 )){
        cout << "Selamat, Anda lulus!" << endl;
        cout << "Rata-rata nilai: " << nRerata << endl;
    }   } else {
        cout << "Maaf, Anda tidak lulus." << endl;
    }

    return 0;

}