#include <iostream>
using namespace std;
class buku
{
    string judul; 

    public:
    buku setJudul (string judul)
    {
        this -> judul = judul;
        return *this;
    }
    string getJudul()
    {
        return this ->judul;
    }
} bukunya;

int main()
{
    // bukunya.setjudul("matematika");
    //cout << bukunya.getJudul();
    cout << bukunya.setJudul("matematika").getJudul();
    return 0;
}