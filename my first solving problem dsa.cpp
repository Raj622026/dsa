#include<iostream>
using namespace std;
void printzeroesandones(int arr[],int size){
    int zerocount=0;
    int onescount=0;
    for(int i=0;i<=size;i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onescount++;
        }
    }
    cout<<"number of zero is:"<<zerocount<<endl;
    cout<<"number of ones is :"<<onescount<<endl;

}
void printExtream(int arr[],int size){
    int i=0;
    int j=size-1;
while(i<j){
    cout<<arr[i]<<" ";
    i++;
    cout<<arr[j]<<" ";
    j--;

}
}
int printuniqedigit(int arr[],int size){

    int ans=0;
    for(int i=0;i<size;i++){
      ans=ans^arr[i];
    }
    return ans;
}
void sortzeroandone(int arr[],int size){
int zerocount=0;
int onecount=0;
for(int i=0;i<size;i++){
    if(arr[i]==0){
        zerocount++;
    }
    if(arr[i]==1){
        onecount++;
    }

}
cout<<zerocount<<onecount<<endl;
    for(int i=0;i<zerocount;i++){
        arr[i]=0;
    }
    for(int i=zerocount;i<size;i++){
        arr[i]=1;
    }
}

void print_pair(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}
void revarr( int arr[],int size){
    int revarr[size];
    for(int i=0;i<size;i++){
        revarr[i]=arr[size-i-1];
    }
    cout<<"reverse array is"<<" ";
    for (int i = 0; i < size; i++)
    {
        cout<<revarr[i]<<" ";
    }
    

}
void rev__arr__using__loop(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
    for(int i=0;i<n;i++){

cout<<"revrse array is :";
cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[]={10,20,30,40,80,90};
    int size=6;
    rev__arr__using__loop(arr,6);
    revarr(arr,4);
   print_pair(arr,4);
 sortzeroandone(arr,10);
 for(int i=0;i<10;i++){
cout<<arr[i]<<" ";
 }

    printExtream(arr,7);
    printzeroesandones(arr,12);
   int ans= printuniqedigit(arr,7);
   cout<<"ans is"<<ans<<endl;
    
    return 0;
}
