#include <iostream>
int main(){
    int NumList;
    std::cout<<"Enter list value : ";std::cin>>NumList;
    std::string UserName[NumList];
    int Value[NumList][3];
    for( int i=0;i<NumList;i++){
        std::cout<<"Enter Your name ["<<i <<"] : ";std::cin>>UserName[i];
        for(int j = 0;j<3;j++){
            if(j==0){
                std::cout<<"Enter your Hour :";std::cin>>Value[i][j];
            }else if (j==1){
                std::cout<<"Enter your Point : ";std::cin>>Value[i][j];
            }
            else if (j==2){
                std::cout<<"Money : ";std::cin>>Value[i][j];  
            }
            else {
                std::cout<<"0-0";
            }           
        }
       std::cout<<"-----------------";
    }
return 0;
}

void FuncHour(int Hour ){
    printf("Total Price :");
}
