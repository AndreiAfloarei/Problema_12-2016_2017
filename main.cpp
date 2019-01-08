#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream in ("data.in");
ofstream out ("data.out");

int b,n,i,j;
string a[100],c[50],pc[100];
float v[100],vmax=0,disc=0,vfinal;

int main()
{in>>b>>n;
for(i=0;i<b;i++)
    in>>a[i]>>pc[i]>>v[i];

for(i=0;i<n;i++)
{
    in>>c[i];
    for(j=0;j<b;j++)
    {
        if(a[j].compare(c[i])==0)
        {
            if(pc[j].compare("p")==0){vmax=vmax+v[j];}
                else disc=+v[j];
    }           }
}

vfinal=(vmax*(100-disc))/100;

out<<vfinal<<endl;

    return 0;
}
