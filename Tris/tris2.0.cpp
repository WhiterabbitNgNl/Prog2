#include<iostream>
#include<fstream>
using namespace std;
int riempie(string p,int v[3][3],int c,bool flag);
int vittoriar(int v[3][3]);
int vittoriac(int v[3][3]);
int vittoriadp(int v[3][3]);
int vittoriads(int v[3][3]);
int vincere(int v[3][3]);
int main(){
ofstream fout("output.txt");
ifstream fin("input.txt");

for(int i=0;i<100;i++)
{int n;int c=0;int q=0,b=0;

    string s=" ";
    fin>>n;
getline(fin,s);
string p;

for(int j=0;j<s.length();j++)
{if((int)s[j]>=48 && (int)s[j]<=50)p+=s[j];
}

for(int z=0;z<n;z++)
{int v[3][3]={0};bool flag=true;
    c=riempie(p,v,c,flag);

//cout<<vittoriac(v) << vittoriadp(v)<<vittoriads(v)<<vittoriar(v)<<endl;
if(vittoriac(v)==1 || vittoriadp(v)==1 ||vittoriads(v)==1 ||vittoriar(v)==1){q++;}
if(vittoriac(v)==2 || vittoriadp(v)==2||vittoriads(v)==2||vittoriar(v)==2){b++;}
    }fout<<q<<" "<<b<<endl;
}


}
int riempie(string p,int v[3][3],int c,bool flag){

int a;bool vittoria=true;int f=0;

for(int i=c;i<p.length();i=i+2)
{if(flag)a=1;if(!flag)a=2;

    v[p[i]-'0'][p[i+1]-'0']=a;c++;f++;
 //for(int x=0;x<3;x++){for(int z=0;z<3;z++){cout<<v[x][z]<<" ";}cout<<endl;}
  //cout<<endl;
  flag=!flag;

if(vittoriac(v)!=0 || vittoriadp(v)!=0 || vittoriads(v)!=0 || vittoriar(v)!=0 ){return c+f;}else if(f==9){return c+f;}


}


}
int vittoriar(int v[3][3]){

    for(int i=0;i<3;i++)
        {int c=0;int x=0;
            int primo=v[i][0];
            if(primo==2){x=2;}if(primo==1){x=1;};
            for(int j=0;j<3;j++){

//cout<<v[i][j]<<" "<<primo<<" c "<<c<<endl;
        if(v[i][j]==primo && primo!=0)
            {c++;if(c==3){return x;}
            }
        }

        }
        return 0;
}int vittoriac(int v[3][3]){

    for(int j=0;j<3;j++)
        {int c=0;int x=0;
            int primo=v[0][j];
            if(primo==2){x=2;}if(primo==1){x=1;};

            for(int i=0;i<3;i++){
               // cout<<v[i][j]<<" "<<primo<<endl;
//cout<<v[i][j]<<" "<<primo<<endl;
        if(v[i][j]==primo && primo!=0)
            {c++;if(c==3){return x;}}
        }//if(c==2){return x;}else{return 0;}
        }
return 0;
}
int vittoriadp(int v[3][3])
{int primo=v[0][0];int x=0;int c=0;if(primo==2){x=2;}if(primo==1){x=1;};
    for(int i=0;i<3;i++)
{if(primo==v[i][i] && primo!=0){c++;if(c==3){return x;}}

}

return 0;}
int vittoriads(int v[3][3]){
int x=0;int c=0;int primo=v[0][2];if(primo==2){x=2;}if(primo==1){x=1;};
for(int j=0;j<3;j++)
{
    if(v[j][2-j]==primo && primo!=0){c++;if(c==3){return x;}}
}
return 0;
}
int vincere(int v[3][3]){



}
