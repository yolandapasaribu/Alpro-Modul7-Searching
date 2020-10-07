#include <iostream>//library input output c++

using namespace std;//meringkas std pada program c++

int sequential_search(int data[],int panjang,int key){//membuat fungsi sequential_search dengan paramater data,panjang,key
    int posisi, i, ketemu;//membuat tipedata posisi, i, dan ketemu

    if(panjang<=0){//melakukan pernyataan dibawah jika panjang <=0
        posisi=-1;//pernyataan posisi=-1
    }
    else{//jika kondisi tidak terpenuhi maka akan melakukan pernyataan di bawah
        ketemu=0;//ketemu memiliki nilai 0
        i=0;//i memiliki nilai 0
        while((i<panjang)&& !ketemu){//melakukan penyataan dibawah jika kondisi i<panjang dan tidak ketemu
            if(data[i]==key){//jika datake i = key
                posisi=i;//maka posisi memiliki nilai i
                ketemu=1;//maka ketemu memiliki nilai 1
            }
            else{//jika kondisi tidak terpenuhi
                i++;//i bertambah 1
            }
            if(!ketemu){//jika kondisi tidak ketemu
                posisi=-1;//maka 	posisi= -1
            }
        }
    }
    return posisi;//mengembalikan ke posisi
}

int main()//program utama c++
{
    int data[]={1,0,3,2,5,7,9,11};//membuat array data yang memiliki nilai 1,0,3,2,5,7,9,11
    int key=1;//key memiliki nilai 1
    int panjang=sizeof(data)/sizeof(*data);//

    int posisi=sequential_search(data,panjang,key);//membuat variabel posisi dengan perintah memanggil fungsi sequential_searching dengan paramaterdata,panjang,key

    //melakukan pengecekan
    if(posisi!= -1){//jika posisi tidak sama dengan -1
        cout<<"Key "<<key<<" ada di index-"<<posisi<<endl;//maka melakukan pernyataan ini
    }
    else{//jika kondisi tidak memenuhui
        cout<<"Key "<<key<<" tidak ditemukan"<<endl;//maka melakukan pernyataan ini
    }

    return 0;
}
