#include <iostream>
using namespace::std;
    string no[5]={"A001","A002","A003","A007","A008"};
    string nama[5]={"Bayu","Irvan","Susanti","Diana","Roni"};
    string namaku,cari,member,barang;
    int jumlah,jum=5,harga;
    float total,diskon;
main(){
    cout<<" Member atau Non Member (Y/T) : ";cin>>member;
if(member=="Y"){
    cout<<" Masukan No ID : ";cin>>cari;
    for (int i=0;i<jum;i++){
    if(cari==no[i])
    namaku=nama[i];}
    cout<<" =====Anda Member=====\n";
    cout<<" No Identitas  : "<<cari<<endl;
    cout<<" Nama          : "<<namaku;
    cout<<" \n\n Jumlah Barang yang Dibeli : ";cin>>jumlah;
    for(int i=1;i<=jumlah;i++){
    cout<<" Harga barang ke-"<<i<<" : ";cin>>harga;
    total=total+harga;}
    cout<<" Jumlah harga      : ";cout<<total<<endl;
    cout<<" Anda mendapatkan diskon 5%\n";
    diskon=total*0.05;
    cout<<" Total setelah Diskon : "<<total-diskon;}
else if(member=="T"){
    cout<<" ==Anda Bukan Member==\n";
    cout<<" Masukkan Nama : ";cin>>namaku;
    cout<<" \n Jumlah Barang yang Dibeli : ";cin>>jumlah;}
    for(int i=1;i<=jumlah;i++){
    cout<<" Harga barang ke-"<<i<<" : ";cin>>harga;
    total=total+harga;}
    cout<<" Jumlah harga      : ";cout<<total<<endl;}
