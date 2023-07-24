#include <iostream>
using namespace std;
int main()
 {
    int N,A[5000],i,j,temp;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
    } 
    for(i=0,j=N-1;i<N/2;i++,j--)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    for(i=0;i<N;i++){
        
        cout<<A[i]<<" ";
    }
    
    return 0;
}
