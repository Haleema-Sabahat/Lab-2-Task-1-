#include<iostream>
using namespace std;

int binarysearch(int a[], int n, int key){
    int low = 0, high = n-1, mid;
    while(low<=high){
        mid = low+(high-low)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(key<a[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int a[7] = {101,105,110,120,135,150,170};
    int keys[2] = {135,112};
    for(int k; k<2; k++){
        int pos =  binarysearch(a, 7, keys[k]);
        if(pos == -1){
            cout<<"Roll No "<<keys[k]<<" not found in the array !!";
        }

        else{
            cout<<"Roll No "<<keys[k]<<" found at index "<<k<<endl;
        }
    }
    return 0;
}
