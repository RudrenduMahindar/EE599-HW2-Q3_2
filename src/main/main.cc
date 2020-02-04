#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    vector<int> v = {arr,arr + n};
    solution.reversevector(v);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;

    return EXIT_SUCCESS;
}