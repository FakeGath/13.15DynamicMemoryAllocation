#include <iostream>

int main(){

    int arr0[]{1,2,3,4,5};
    int arr1[]{6,7,8,9,10};

    int * p_Arra1{arr1};
    int * p_Arra0{arr0};

    //Prints Arr0


    std::cout<<"Arr0: ";
    for (size_t i {0};i<std::size(arr0);++i)
    {
        std::cout<<p_Arra0[i]<<" ";
    }
    std::cout<<std::endl;
    //Prints Arr1
    std::cout<<"Arr1: ";

    for (size_t i {0};i<std::size(arr0);++i)
    {
        std::cout<<p_Arra1[i]<<" ";
    }
    

    //Prints Arr0
    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Arr0: ";
    for (size_t i {0};i<std::size(arr0);++i)
    {
        std::cout<<*(p_Arra0+i)<<" ";
    }
    std::cout<<std::endl;
    //Prints Arr1
    std::cout<<"Arr1: ";
    
    for (size_t i {0};i<std::size(arr0);++i)
    {
        std::cout<<*(p_Arra1+i)<<" ";
    }

    return 0;
}