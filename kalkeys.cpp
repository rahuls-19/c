    #include <iostream>
     
    using namespace std;
     
    void rotateSub2(int i, int N, int K, int ar[]){
    	int I = i-K;
    	int K2 = K+N-i;
    	int br[N];
    	for(int j = 0; j<K2; ++j){
    		br[I+((j+(N-i))%K2)] = ar[I+j];
    	}
    	for(int j = 0; j<K2; ++j) {
    		ar[I+j]=br[I+j];
    		//cout<<ar[i+j]<<" ";
    	}
    //	cout<<endl;
    }
     
    void rotateSub(int i, int N, int K, int ar[]){
    	int K2 = 2*K;
    	int br[N];
    	for(int j = 0; j<K2; ++j)
    		br[i+j] = ar[i+(j+K)%K2];
     
    	for(int j = 0; j<K2; ++j){
    		ar[i+j]=br[i+j];
    		//cout<<ar[i+j];
    	} 
    //	cout<<endl;
    }
     
    void rotate(int N, int K, int ar[]){
    	for(int i = 0; i<N; i += 2*K){
    		if(N-i>=2*K)
    			rotateSub(i, N, K, ar);
    		else if(N-i<2*K && N-i>=K)
    			rotateSub(N-(2*K), N, K, ar);
    		else
    			rotateSub2(i, N, K, ar);
    	}
    }
     
    int main(){
    	int T; cin>>T;
    	
    	for(int i = 0; i<T; ++i){
    		int N, K; cin>>N>>K;
    		int ar[N];
    		if(K==0){
    			
    			for(int j = 0; j<N; ++j) cout<<j+1<<" ";
    			cout<<endl;
    		}
    		
    		else if(K<=N/2){
    		
    			for(int j = 0; j<N; ++j) ar[j] = j+1;
    			rotate(N, K, ar);
    			for(int j = 0; j<N; ++j) cout<<ar[j]<<" ";
    			cout<<endl;
    		}
    		else
    		cout<<"-1"<<endl;
    	
    	}
    	return 0;
    } 
