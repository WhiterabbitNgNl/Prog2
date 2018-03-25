#include <iostream>
#include <fstream>

using namespace std;
double diff(double *a,int n);

int main()
{fstream fin ("input.txt");
ofstream fout("output.txt");
for(int i=0;i<10;i++)
{int n=0;
    fin>>n;
    double *p=new double [n];
    for(int j=0;j<n;j++)
    {fin>>p[j];

    }
fout<<diff(p,n)<<endl;

delete[] p;}
fin.close();
fout.close();

return 0;
}double diff(double *a,int n)
{double guadagno =0;
 for(int i=0;i<n;i++)
{for(int j=i;j<n-1;j++)
{if((a[j+1]-a[i])>guadagno)
    guadagno=a[j+1]-a[i];

}
}
return guadagno;
}
