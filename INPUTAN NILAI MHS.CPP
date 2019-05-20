#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main ()
{
 char huruf,nama[25];
 float nmid,nfinal,totaltugas,totalmid,totalfinal,w,nilai,jumlah=0;
 int i=1;
 atas:
 cout<<"Nama Mahasiswa	   : "; cin>>nama;
 do
 {cout<<"Nilai Tugas" << i << " = ";cin>>nilai;
    jumlah=jumlah+nilai;
    i++; }
    while (i < 5);
 cout<<"NIlai Mid     : "; cin>>nmid;
 cout<<"Nilai Final   : "; cin>>nfinal;
     totaltugas     = 0.3*((jumlah)/5);
     totalmid       = 0.3*nmid;
     totalfinal     = 0.4*nfinal;
     w	 = totaltugas+totalmid+totalfinal;
   if((w >=80)&&(w<=100))
      huruf = 'A';
   else if((w >=80)&&(w<=79))
      huruf = 'B';
   else if((w >=70)&&(w<=69))
      huruf = 'C';
   else if((w >=60)&&(w<=59))
      huruf = 'D';
   else if(w <50)
      huruf = 'E';
 cout<<"\nNama  	      :  "<<nama<<endl;
 cout<<"\nTotal Tugas       :  "<<totaltugas<<endl;
 cout<<"\nTotal Mid         :  "<<totalmid<<endl;
 cout<<"\nTotal Final       :  "<<totalfinal<<endl;
 cout<<"\nTotal Nilai Akhir :  "<<w<<endl;
 cout<<"\nNilai Huruf       :  "<<huruf<<endl;

getch(); }

