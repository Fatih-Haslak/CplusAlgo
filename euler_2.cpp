#include <iostream>


using namespace std;

int main()

{

    int sonuc=0;
    int point=0;
    int previous=1;
    int toplam=0;
    while(1)
    {
        //fibanoci
        
        if(sonuc%2==0)

        {
        toplam+=sonuc;
        }

        if(sonuc<=4000000)
        {

        
        sonuc=point+previous;
        previous=point;
        point=sonuc;

        }

        else
        {
        cout << toplam <<endl;
        break;
        
        }

    }
    
    return 0;
}