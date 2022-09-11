#include<iostream>
#include<ctime>
int main(){

    srand(time(NULL)); 
    int t,lim;
    std::cout<<"How many random numbers do you want to generate? \n" << ": ";
    std::cin>>t;

    std::cout<<"What should be the limit of RNG:  \n" << ": ";
    std::cin>>lim;

    while(t--){
    int num = (rand() % lim) + 1;
    std::cout << num << ' ';
    }
    return 0;
}
