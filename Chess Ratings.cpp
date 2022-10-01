#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int Xeo,Teo;
	    cin>>Xeo>>Teo;
	   int xinji=Teo-Xeo;
	    if(Teo==Xeo){
	        cout<<"0"<<endl;
	    }
	    
	    else if(xinji %8==0) {
	        
	        cout<<xinji/8<<endl;
	    }
	    else if(xinji>0&&xinji<8){
	        cout<<"1"<<endl;
	    }
	    else{
	        int yinji=(xinji/8)+1;
	        cout<<yinji<<endl;
	    }
	}
	return 0;
}
