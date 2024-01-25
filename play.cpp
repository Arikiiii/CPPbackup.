#include <iostream>
#include <cstdlib> 
using namespace std;
int main (){
    int HpEnamy = 1000*100;
    int loop=0;
    cout<<"star"<<endl;
    while (loop==0)
    {
        int BaseDamage = rand()%300;
        cout<<"atk : "<<BaseDamage<<endl;
        int LimitBreak=BaseDamage+BaseDamage*800/100;
        int WinELement;
        cout<<LimitBreak<<endl;
        cout<<"HP : "<<HpEnamy<<endl;
        cout<<"-"<<LimitBreak<<endl;
        HpEnamy = HpEnamy - LimitBreak;
        if(HpEnamy <= 0 ){ 
            cout<<"Monster die"<<endl;
            loop++;
        }
    }
    

return 0 ;
}