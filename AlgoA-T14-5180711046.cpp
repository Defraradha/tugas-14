#include<iostream>

using namespace::std;

main(){
int harga[10],jumlah_barang,total,jumlah[10],total_diskon,total_semua,diskon;
string nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"};
string nomor[5]={"A001","A002","A003","A007","A008"};
string barang[10],member;
int i, cari_harga, cariin;

cout<<"+++++++++++  INDOMARET   ++++++++++";cout<<endl;cout<<endl;
cout<<" Apakah pembeli member : ";cin>>member;
cout<<endl;
    if(member=="tidak"||member=="t")
{
        cout<<" Inputkan nama : ";cin>>nama[0];
}
    if(member=="punya"||member=="ya"||member=="y")
{       nama[0]="Bayu";nama[1]="Irvan";nama[2]="Susiati";nama[3]="Diana";nama[4]="Roni";
        cout<<" Inputkan no identitas pembeli : ";cin>>nomor[0];
        cout<<endl;
    if(nomor[0]=="A001")
      { cout<<"Nama           :"<<nama[0]<<endl;
        cout<<"Nomor Identitas:"<<nomor[0]<<endl;}

    if(nomor[0]=="A002")
        {cout<<"Nama           :"<<nama[1]<<endl;
         cout<<"Nomor Identitas:"<<nomor[0]<<endl;}

    if(nomor[0]=="A003")
        {cout<<"Nama           :"<<nama[2]<<endl;
         cout<<"Nomor Identitas:"<<nomor[0]<<endl;}

    if(nomor[0]=="A007")
        {cout<<"Nama           :"<<nama[3]<<endl;
         cout<<"Nomor Identitas:"<<nomor[0]<<endl;}

    if(nomor[0]=="A008")
        {cout<<"Nama           :"<<nama[4]<<endl;
         cout<<"Nomor Identitas:"<<nomor[0]<<endl;}
}

cout<<endl;
cout<<"berapa macam barang yang dibeli  :";cin>>jumlah_barang;
for(int i=0;i<jumlah_barang;i++){
cout<<" Pembelian ke-"<<i+1<<endl;
cout<<endl;
cout<<" Barang yang akan dibeli         : ";cin>>barang[i];
cout<<" Inputkan harga barang           : Rp. ";cin>>harga[i];
cout<<" jumlah yang akan dibeli         : ";cin>>jumlah[i];
cout<<endl;

total=harga[i]*jumlah[i];
total=total+harga[i]*jumlah[i];
total_diskon=(5*total)/100;
total_semua=total-total_diskon;
}
if(member=="tidak"||member=="t")
{

    cout<<"jumlah barang yang dibeli :"<<jumlah_barang<<endl;
    cout<<"Harga barang       :"<<harga<<endl;
    cout<<"Total pembayaran   Rp. "<<total_diskon<<endl;
}
else if(member=="punya"||member=="ya"||member=="y")
{
    cout<<"Harga semua barang       Rp."<<total<<endl;
    cout<<"Diskon sebesar           Rp."<<total_diskon<<endl;
    cout<<"Total pembayaran         Rp."<<total_semua<<endl;
}
cout<<"searching";cout<<endl;
cout<<"harga yang dicari : ";cin>>cari_harga;

for (i=0;i<=jumlah_barang;i++)
{
    if (cari_harga==harga[i])
    {
        cariin = i;
        cout<<" ada pada data ke : "<<cariin+1;
        cout<<endl;
    }
    else{cout<<" "<<endl;}
}
}
