#include <iostream>

using namespace std;
void QS( int datasimpan[], int kiri, int kanan)
{
    int x=kiri, y=kanan;
    int temp;
    int bagi=datasimpan[(kiri+kanan)/2];

    while(x<=y)
    {
        while(datasimpan[x]<bagi)
        x++;
        while(datasimpan[y]>bagi)
        y--;
        if(x<=y)
        {
            temp=datasimpan[x];
            datasimpan[x]=datasimpan[y];
            datasimpan[y]=temp;
            x++;
            y--;
        }
    }

    if(kiri<y)
    {
        QS(datasimpan,kiri,y);
    }
    if(x<kanan)
    {
        QS(datasimpan,x,kanan);
    }
}

int main()
{
    int datasimpan[100];
    int x,banyakdata,awalbatas,akhirbatas;
    awalbatas=0;
    cout<<"QUICK SORT"<<endl;
    cout<<"masukkan banyak data yang di urut: "; cin>>banyakdata;

    akhirbatas=banyakdata;
    cout<<"masukkan data-datanya: \n\n";
    for(x=1; x<=banyakdata; x++)
    {
        cout<<"Masukan data ke- "<<x<<" : "; cin>>datasimpan[x];
    }

    QS(datasimpan,awalbatas,akhirbatas);
    cout<<"\nHasil pengurutan data: ";
    for(x=1; x<=banyakdata; x++)
        cout<<" "<<datasimpan[x];
}
