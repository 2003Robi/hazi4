#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[250],uj[250]="",inv[20],*p;
    int i,j,ok=0;
    cout<<"szoveg:";
    cin.get(s,250);
    p=strtok(s," ");
    while(p!=0)
    {
        if(strlen(p)%2!=0)
        {


            ok=1;
            j=0;
            for(i=strlen(p)-1 ; i>=0 ; i--)
            {
                inv[j]=p[i];
                j++;

            }
            inv[j]=NULL;
            strcat(uj,inv);
            strcat(uj," ");

        }
        else
        {

            strcat(uj,p);
            strcat(uj," ");
        }
        p=strtok(0," ");
    }
    if (ok==1)
        cout<<uj;
    else
        cout<<"nu exista";
    return 0;
}
