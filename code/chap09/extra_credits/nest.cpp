
#include <iostream>

void print_space(int n)
{
    if(n==0)
    {
        return;
    }
    std::cout<<'\t';
    print_space(n-1);
}

void print_tree(int n){
        if(n==0) {return;}
        //std::cout<<'\t';
        print_space(n);
        std::cout<<"This was written by call number "<<n<<std::endl;       
        print_tree(n-1);      
        //std::cout<<'\t';
        print_space(n);
       std::cout<<"This Also writtin by call number "<<n<<std::endl;        
}

int main()
{
    print_tree(4);
    return 0;
}
