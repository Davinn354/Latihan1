#include <iostream>
using namespace std;

int main (){
    int Bilangan;
    string status
    srand(time(0));

    Bilangan = rand() % 10;
    cout << "Bilangan adalah : " << Bilangan << endl;

    if(Bilangan % 2 == 0){
        status = "genap";
    }
    else{
        status = "ganjil";
    }


    cout << "Statusnya adalah : " << status << endl;
    return 0;
}