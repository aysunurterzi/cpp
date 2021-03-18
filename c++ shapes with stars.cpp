// AYSU NUR TERZI
// Date: 06.12.2019
// Development Environment: Code Blocks



#include <iostream>
#include<math.h>

using namespace std;



int main()
{
    int secim;
    cout<<"Program seciniz:";
    cout << "\n";
    cout<<"1- program1";
    cout << "\n";
    cout<<"2- pragram2";
    cout << "\n";
    cout<<"3- pragram3";
    cout << "\n";
    cout<<"4- pragram4";
    cout << "\n";
    cout<<"5- pragram5";
    cout << "\n";
    cout<<"6- cikis";
    cin>>secim;


    if(secim==1)
    {
        int  i, j, n;
        cout << "Basamak sayisini giriniz: ";
        cin >> n;
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << "\n";
        }
        return 0;
    }

    if(secim==2)
    {

        int  i, j, n;
        cout << "Basamak sayisini giriniz: ";
        cin >> n;
        for(i = n; i >= 1; i--)
        {
            for(j = 1; j <= i; j++)
            {
                cout << "* ";
            }

            cout << "\n";
        }
        return 0;
    }

    if(secim==3)
    {
        int n,i,j,k;

        cout<<"Basamak sayisini giriniz: ";

        cin>>n;

        for (int j = 1; j <= n; j++)
        {
            for(int i = n-j; i>0; i--)
            {
                cout<<"  ";
            }

            for(int k = 1; k <= j; k++)
            {
                cout<< "* ";
            }

            cout << endl;
        }

        return 0;
    }

    if(secim==4)
    {
        int n, s, i, j;
        cout << "Basamak sayisini giriniz: ";
        cin >> n;
        for(i = 1; i <= n; i++)
        {
            for(s = i; s < n; s++)
            {
                cout << " ";
            }

            for(j = 1; j <= (2 * i - 1); j++)
            {
                cout << "*";
            }

            cout << "\n";
        }

    }

    if(secim==5)
    {
        int n, s, i, j;
        cout << "Basamak sayisini giriniz: ";
        cin >> n;
        for(i = 0; i <= n; i++)
        {
            for(s = n; s > i; s--)
                cout << " ";
            for(j=0; j<i; j++)
                cout << "* ";
            cout << "\n";
        }
        for(i = 1; i < n; i++)
        {
            for(s = 0; s < i; s++)
                cout << " ";
            for(j = n; j > i; j--)
                cout << "* ";
            cout << "\n";
        }
        return 0;

    }




    if (secim == 6)
    {
        cout<<"program kapatiliyor";
        return(0);

    }
}
