#include <iostream>
using namespace std;
int fact(int x){
    int facto= 1,y=1;
    while (y<=x){
        facto= facto*y;
        y++;
    }
    return facto;
}
int ncr(int n,int r){
    int s = fact(n);
    int t = fact(r);
    int u= fact(n-r);
    int ans = s/(t*u);
    return ans;
}
void pascaltriangle(int row){
    int i=0,j=0;
    for (i=0;i<row;i++){
        for(int space=1; space<=(row-i); space++){
            cout<<" ";
        }
        for (j=0;j<=i;j++){
           cout<< ncr(i,j)<<" ";
        }
        cout<<endl;
        
    } 
}
int main(){
    int r;
    cout<<"Enter no. of rows : ";
    cin>>r;
    cout<<endl;
    pascaltriangle(r);
    
}
