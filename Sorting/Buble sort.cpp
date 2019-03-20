#include <iostream>
using namespace std;

int main()
{
    int banyakdata, x, y;
    bool adatukar;
    int datasimpan[100],temp;

    cout << "Bubble Sort" << endl << endl;
    cout << "Banyak data yang dimasukan: ";
    cin >> banyakdata;

    x = 0;
    while (x < banyakdata)
        {
            cout << "Masukkan data ke-" << x + 1 << ": ";
            cin>>datasimpan[x];
            x++;
        }

    adatukar=true;
    x=1;
    while (x<banyakdata && adatukar)
    {
        y=1;
        adatukar=false;
        while (y<=(banyakdata-1))
        {
            if (datasimpan[y-1] > datasimpan[y])
            {
                adatukar=true;
                temp=datasimpan[y-1];
                datasimpan[y-1]=datasimpan[y];
                datasimpan[y]=temp;
            }
            y++;
        }
        x++;
    }
    x = 0;
    cout<<endl<<endl;
    cout<<"Data yang terurut : ";
    while (x<banyakdata)
    {
       cout<<datasimpan[x]<<" " ;
       x++;
    }
    return 0;
}
