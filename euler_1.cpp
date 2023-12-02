#include <iostream>


using namespace std;

int main()

{

    int sonuc =0;

    for(int i =0 ; i<1000; i++)
    {

        if(i%3==0 || i%5== 0)
        {
            sonuc+=i;
        }
    }

    cout << sonuc<<endl;
    


    return 0;

}