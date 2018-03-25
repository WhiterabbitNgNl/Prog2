#include<iostream>
#include<fstream>


using namespace std;
void ordina(float *v,int n);
int main()
{ifstream fin("input.txt");
ofstream fout("output.txt");

for(int i=0;i<10;i++)
{float max=0,maxtot=0;
int n,c=0;

    fin>>max;
    fin>>n;
float v[n];
    for(int j=0;j<n;j++)
    {fin>>v[j];

    }
    ordina(v,n);


do{
        maxtot+=v[c++];


}while(maxtot<max);
fout<<c-1<<" "<<maxtot-v[c-1]<<endl;


}
fin.close();
fout.close();
return 0;}
void ordina(float *v,int n){
for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{if(v[i]>v[j])
    {float temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    }
}

}


}

