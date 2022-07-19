#include<iostream>
using namespace std;
int GCD(int x , int y)
{   //optimized code(solution)
     //Time - log(min(x , y))
     //Space - log(min(x , y));


    return y==0?x:GCD(y , x%y);
}


int main(){
    int ans = GCD(12,20);
    cout<<ans;
    
    return 0;
}