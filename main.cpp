#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x = 5;
    int tab[x]={3, 28, 555, 4, 5};
    int pod;
    int zam;

    while(true)
    {
        zam = 0;
        for( int i = 0; x > i; i++)
            if(tab[i]>tab[i+1])
            {
                cout << tab[i]<<" "<< tab[i+1]<<endl;
                pod = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = pod;
                zam++;
                cout << pod<<endl;
            }
        if(zam == 0)break;
    }

    cout << tab[0]<< tab[1]<< tab[2]<< tab[3]<< tab[4]<<endl;


    return 0;
}
