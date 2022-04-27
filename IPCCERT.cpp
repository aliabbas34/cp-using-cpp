#include <iostream>
using namespace std;

int main() {
	int n,m,k;
	cin>>n>>m>>k;
	int out=0;
	while(n--){
	    int a[k+2];
	    int total=0;
	    for(int i=1;i<k+2;i++){
	        cin>>a[i];
	        if(i!=k+1)
	        total+=a[i];
	    }
	    if(total>=m&&a[k+1]<=10)
	    out++;
	}
	cout<<out<<endl;
	return 0;
}
