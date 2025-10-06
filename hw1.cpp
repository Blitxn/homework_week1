#include <iostream>

using namespace std;

void put(double *p_array, int inx, double value, int &n, int size){
    if(inx > n || inx > size){
        cout<<"Out of bound!"<<endl;
        return;
    }
    p_array[inx] = value;
    n = (inx < n)? n+1: n;
}

void insert(double *p_array, int inx, double value, int &n, int size){
    if(inx < 0 || inx >=n){
        cout<<"Out of bound!"<<endl;
        return;
    }
    for(int i = n; i > inx ; i--){
       p_array[i]=p_array[i-1];
    }
    p_array[inx]=value;
       n++;
}

void erase (double *p_array, int inx, int &n, int size){
     if(inx > n || inx > size){
        cout<<"Out of bound!"<<endl;
        return;
    }
    for(int i = inx;i<n-1;i++){
        p_array[i]=p_array[i+1];
    }
    n--;
}
int main(){
    double array[10] = {5,4,3,2,1};
    int n = 5;
    double *p_array = array;
    
    cout<<"Numbers of array"<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Value: "<<*(p_array+i)<<endl;
    }
   
    cout<<"Insert number"<<endl;
    insert(array,2,10,n,10);
    for(int i = 0; i < n; i++){
        cout<<"Value: "<<*(p_array+i)<<endl;
    }
   
    cout<<"After Delete"<<endl;
    erase(array,1,n,10);
    for(int i = 0; i < n; i++){
        cout<<"Value: "<<*(p_array+i)<<endl;
    }

    return 0;
}