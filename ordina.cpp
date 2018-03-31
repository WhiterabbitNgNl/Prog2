#include<iostream>
#include<fstream>

using namespace std;
void ordina(string* v,int n);
int main(){
ifstream fin("output1.txt");
ofstream fout("output.txt");
for(int i=0;i<100;i++)
{int n=0;
fin>>n;
string *v=new string[n];
for(int j=0;j<n;j++)
{fin>>v[j];

}
ordina(v,n);
for(int j=0;j<n;j++)
{fout<<v[j]<<" ";

}
fout<<endl;
}


}
void ordina(string *v,int n){
 int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (v[j] > v[j+1])
              {string temp=v[j];
              v[j]=v[j+1];
              v[j+1]=temp;

              }
}
