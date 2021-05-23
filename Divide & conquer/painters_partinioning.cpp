#include<bits/stdc++.h>

using namespace std;

bool isPossible(long long int a[],int b,int n,long long int mid,int t){
   long long int painted_board=0;
  int painter = 1;
  for(int i=0;i<b;i++)
  {
    if(painted_board + (a[i]*t)>mid)
    {
      painter++;
      painted_board = a[i]*t;
	  if(painter>n || painted_board>mid)
	  {
	    return false;
	  }
	}
	else{
	  painted_board += a[i]*t;
	 }
   }
	return true;
}

int painterpartition(long long int board[],int b,int n,int t){
if(b<n) return -1;

long long int sum = 0;
long long int s = board[b-1]*t;

for(int i=0;i<b;i++){
	sum += board[i];
}

long long int e = sum*t;
long long int ans=LONG_MAX;

while(s<=e){
	long long int mid = (s+e)/2;

	if(isPossible(board,b,n,mid,t)){
		ans = min(ans,mid);
		e = mid - 1;
	}

	else{
		s = mid + 1;
	}
}
return ans%10000003;
}

int main(){
int n;
int b;
int t;
cin>>b;
cin>>n;
cin>>t;
long long int board[100000];
for(int i=0;i<b;i++){
cin>>board[i];
}
cout<<painterpartition(board,b,n,t)<<endl;
return 0;
}