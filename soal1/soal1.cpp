#include<iostream>

using namespace std;
int main()
{
    int A,B,X,Y;
    cout<<"Masukan Nilai A : ";
    cin>> A;
    cout<<endl;
    cout<<"Masukan Nilai B : ";
    cin>> B;
    cout<<endl;

    X=A;
    Y=B;

    while(X!=Y)
        {if (X<Y)
        {
            X=X+A;
        }
    else{
            Y=Y+B;
        }

    }
    cout<<"Hasilnya adalah : "<< X <<endl;
    cin.get();
}
