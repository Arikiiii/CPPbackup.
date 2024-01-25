#include <iostream>
int main (){
    int star=5;
    for (int i=0;i<=star;i++){
        for(int j=star;j>=i;j--){
            std::cout<<" ";
        }
        for(int k=0;k<=i;k++){
            std::cout<<"*";
        }
    std::cout<<"\n";
    }
    
}