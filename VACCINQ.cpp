#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,p,x,y;
	    cin>>n>>p>>x>>y;
	    int a[n+1];
	    for(int i=1;i<n+1;i++){
	        cin>>a[i];
	    }
	    int one=0;
	    int zero=0;
	    int i=1;
	    while(i!=p){
	        if(a[i]==1)
	        one++;
	        else
	        zero++;
	        i++;
	    }
	    int total_time=zero*x+one*y;
	    cout<<total_time+y<<endl;
	}
	return 0;
}
