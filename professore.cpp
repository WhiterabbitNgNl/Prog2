#include<iostream>
#include<fstream>
#include <string.h>
using namespace std;
void ordina(char *v,int n);
void confronto(char *v,int n,string c,int& q);
int posti(string c);
void Swap(char *string,int i,int j);
void Perm(char *stringa,int i ,int n,string comb,ofstream& fout);
 int factorial(int n);

int main()
{ofstream fout("output1.txt");
ifstream fin("input.txt");
for(int i=0;i<100;i++)
{int n=0;string s="";int q=0;*(&q)=0;
string combinazionef;
fin>>n;
//cout<<n<<endl;
    char *v=new char[n];
    for(int j=0;j<n;j++)
    {fin>>v[j];

    }

    fin>>combinazionef;

    confronto(v,n,combinazionef,q);
    ordina(v,n);

char *w=new char[posti(combinazionef)];

    cout<<"confronto"<<" "<<posti(combinazionef)<<endl;

    cout<<combinazionef<<endl;
for(int i=0;i<posti(combinazionef);i++)w[i]=v[q+i];
for(int j=0;j<posti(combinazionef);j++)
    {
    cout<<w[j]<<endl;
    }
fout<<factorial(posti(combinazionef))<<" ";
     Perm(w,0,(posti(combinazionef))-1,combinazionef,fout);


delete[] w;delete[] v;
fout<<endl;
}

fout.close();
fin.close();
return 0;
}
void ordina(char *v,int n){
 int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if ((int)v[j] >(int) v[j+1])
              {char temp=v[j];
              v[j]=v[j+1];
              v[j+1]=temp;

              }
}
void confronto(char *v,int n,string c,int& q){
for(int i=0;i<c.length();i++)
{for(int j=0;j<n;j++)
{if(c[i]==v[j])
{v[j]='+';
q++;
}
}
}
}
int posti(string c){
int p=0;
for(int i=0;i<c.length();i++)
    if(c[i]=='*')p++;
return p;



}
void Perm(char *stringa,int i ,int n,string comb,ofstream &fout){
	int j;int q=0;

	if(i==n){
		for(j=0;j<=n;)
		   {for(int p=0;p<comb.length();p++)
		   if(comb[p]=='*'){comb[p]=stringa[j++];}
		   }fout<<comb<<" ";

		}else{
		for( j=i ; j<=n ; j++ ){
		Swap(stringa,i,j);
		Perm(stringa,i+1,n,comb,fout);
		Swap(stringa,i,j);
		}
	}
}

//Effettua un semplice scambio di posizione
void Swap(char* string,int i,int j){
	int temp;
	temp = string[i];
	string[i] = string[j];
	string[j] = temp;
}
int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
void ordina (){
ifstream fin("output.txt");



}

