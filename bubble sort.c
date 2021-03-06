#include<stdio.h>
#include<stdlib.h>
#define max 500

void bubble_sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n,arr[max],i;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fclose(fp);
    bubble_sort(arr,n);
    fp=freopen("write.txt","w",stdout);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    fclose(fp);
    return 0;
}
