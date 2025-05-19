#include<stdio.h>
int main()
{
    int arr[6]={1,3,4,2,6,9};
    int t=0;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<=n-1;i++){
        printf("%d",arr[i]);
    }
}


