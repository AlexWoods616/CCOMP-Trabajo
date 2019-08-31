#include <iostream>

using namespace std;

int main()
{
    int x;
    int y = 2;
    int z = 2;
    cout << "Inserte numero: ";
    cin >> x;

    if (x == 1){
        cout << "1 solo tiene un divisor";
    }
    else if (x == 0){
        cout << "0 no es primo";
    }
    else {
        while (y<x){
            if (x%y == 0){
                z++;
                y++;
            }else{
                y++;
            }
        }
        if (z>2){
            cout << x << " no es primo";
        }else{
            cout << x << " es primo";
        }
    }

    cout << endl;
    cout << endl;
    cout << "Los numeros primos menores que 100 son:" << endl;

    int a=0;
    for(int b=1; 100>=b;b++){
        for(int c=1; b>=c;c++){
            if(b%c==0){
                a++;
            }
        }
        if(a==2){
            cout<<b<<" ";
        }
        else a=0;
    }

    cout << endl;
    cout << endl;

    int n,i,m=0;
    cout<<"Inserte un numero: ";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0){
            m+=i;
        }
    }
    if(m==n){
        cout<<"el numero es perfecto ";
    }
    else{
        cout<<"el numero no es perfecto ";
    }

    cout << endl;
    cout << endl;

    return 0;
}
