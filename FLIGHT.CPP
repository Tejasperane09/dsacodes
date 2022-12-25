#include<iostream> 
using namespace std;
 
int n,g[10][10];
 string y,c[10];
int main(){
 
    cout<<"Enter the no. of cities : ";
 
    cin>>n;
 
    for(int i=1;i<=n;i++){
 
        cout<<"Enter the name of city "<<i<<": ";
 
        cin>>c[i]; 
    }
 
    for(int i=1;i<=n;i++){
 
        for(int j=1;j<=n;j++){
  
            cout<<"Is there any route between "<<c[i]<<" and "<<c[j]<<" : ";
 
            cin>>y;
 
              if(y=="y" || y=="Y" || i!=j)
              {
                cout<<"Enter the distance ";
 
                cin>>g[i][j];
 
              }
 
              else{
 
                  g[i][j]=0;
 
              }
        }
 
    }
    for(int i=1;i<=n;i++){
 
        cout<<"\t"<<c[i];
 
    }
 
    cout<<endl;
 
        for(int i=1;i<=n;i++){
 
            cout<<c[i]<<"\t";
 
            for(int j=1;j<=n;j++){
 
                cout<<g[i][j]<<"\t";
            }
 
            cout<<endl;
        }
        return 0;
}