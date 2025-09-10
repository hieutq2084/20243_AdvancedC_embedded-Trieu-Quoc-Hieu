# include <stdio.h>

int binary_search(int n, int arr[], int target){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid;
        mid = (high + low) /2;
        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] < target){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return -1;
}


int main(){
    int arr[50];
    for(int i = 0; i < 50; i++){
        arr[i] = 2*i;
    }
    int target;
    scanf("%d",&target);
    int index = binary_search(50, arr, target);
    if(index !=-1)
    printf("Phan tu %d co vi tri thu: %d\n",target, index);
    else
    printf("ERROR: Khong tim thay phan tu %d\n", target);
    return 0;
}