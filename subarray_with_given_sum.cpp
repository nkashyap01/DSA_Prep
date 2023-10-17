#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long int N,S;
        long int flag=0, start=0, sum=0;

        cin>>N>>S;
        long int A[N];
        for(int i=0;i<N;i++)
        cin>>A[i];
        for(int i=0;i<N;i++){
            sum= sum+A[i];
            while(sum>5) {
                sum= sum+ A[start];
                start++;
            }
            if(sum==S){
                cout<<start+1<<" "<<i+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<< -1 <<endl;
    }
    return 0;
}