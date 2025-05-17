#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
        static int nim;
    public:
        int id;
        string nama;

        void setID();
        void printall();

        static void setNim(int pNim){nim=pNim;  /*definisi function*/}
        static int getNim(){return nim; /*defiisi*/}
        mahasiswa(string pnama): nama(pnama){setID();} 
};

int mahasiswa ::nim=0;
void mahasiswa::setID(){
    id = ++nim;
}
void mahasiswa::printall(){
    cout<< "ID  = "<<id<<endl;
    cout<< "Nama ="<<nama<<endl;
    cout<<endl;
}

int main(){
    mahasiswa mhs1("sri dadi");
    mahasiswa mhs2("budi jatmiko");
    mahasiswa::setNim(9); //mengakses nim melalui static member function "setnim"
    mahasiswa mhs3("andi janu");
    mahasiswa mhs4("joko wahono");

    mhs1.printall();
    mhs2.printall();
    mhs3.printall();
    mhs4.printall();

    cout<<"akses dari luar object = "<<mahasiswa::getNim()<<endl; // mengakses nim melalui static member function "getNim"

    return 0;
}