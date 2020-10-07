#include <iostream>//library input output c++

using namespace std;//meringkas std pada program c++

int binnary_search(int data[],int panjang,int key){//membuat fungsi sequential_search dengan paramater data,panjang,key
    int awal,tengah,akhir,posisi;//membuat tipedata awal,tengah,akhir, posisi

    awal=0;//awal memiliki nilai 0
    akhir=panjang-1;//akhir memiliki nilai panjang-1
    posisi=-1;//posisi memiliki nilai -1

    while(awal<=akhir){//apabila awal<=akhir
        tengah=(awal+akhir)/2;//maka nilai tengah = awal+akhir

        if(key==data[tengah]){//jika key=data ke tengah
            posisi=tengah;//maka posisi = tengah
            break;//program bereakhir
        }
        else if(key<data[tengah]){//jika kondisi key<data ke tengah
            akhir=tengah-1;//maka akhir=tengah-1
        }
        else if(key>data[tengah]){//jika kondisi key>data ke tengah        }
    }


}

int main()//program utama c++
{
    int data[]={1,2,3,4,5,6,7,8,9,10};//membuat array data yang memiliki nilai 1,2,3,4,5,6,7,8,9,10
    int key=7;//key memiliki nilai 1
    int panjang=sizeof(data)/sizeof(*data);//

    int posisi=binnary_search(data,panjang,key);//membuat variabel posisi dengan perintah memanggil fungsi sequential_searching dengan paramaterdata,panjang,key

    //melakukan pengecekan
    if(posisi!= -1){//jika posisi tidak sama dengan -1
        cout<<"Key "<<key<<" ada di index-"<<posisi<<endl;//maka melakukan pernyataan ini
    }
    else{//jika kondisi tidak memenuhui
        cout<<"Key "<<key<<" tidak ditemukan"<<endl;//maka melakukan pernyataan ini
    }

    return 0;
}
