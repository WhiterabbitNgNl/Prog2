#include<iostream>
#include<fstream>
using namespace std;
int ricerca(string cerca,string riga,string  p,ofstream &fout);
int main(){
ofstream fout("output.txt");
ifstream fin("input.txt");

for(int i=0;i<100;i++)
{string cerca,riga="";string p="";;
fin>>cerca;
getline(fin,riga);
//cout<<cerca<<endl<<riga<<endl;


       ricerca(cerca,riga,p,fout);


}





}
int ricerca(string cerca,string riga,string p,ofstream &fout){

for(int i=1;i<=riga.length()-cerca.length()+1;i++){
    string shit="";int c=0;
    for(int q=i;q<cerca.length()+i;q++)
        {shit+=riga[q];
    }//cout<<shit<<endl;
int pos=cerca.length()+1;int pos2=cerca.length()+1;
for(int z=0;z<cerca.length();z++)
    {bool flag=true;
        for(int j=z-1;j<=z+1;j++)
{
   //cout<<" cerca:"<<cerca[z]<<" i "<<i<<" j "<<j<<" pos "<<pos<<"in:"<<shit[j]<<" c "<<c<<endl;
    if(cerca[z]==shit[j] && flag && j!=pos && j!=pos2){c++;flag=false;if(i!=0)pos2=pos;pos=j;}

}

}
if(c==cerca.length())
fout<<i-1<<" ";


}fout<<endl;


}
