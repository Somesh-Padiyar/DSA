#include<stdio.h>

void sort_array_0_1_2();
void explaination();

int main(){
    sort_array_0_1_2();
    return 0;
}
void sort_array_0_1_2(){
    printf("Enter the size of the Array :- ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of array elements (can only be 0,1,2) :-\n");
    for (int i = 0; i < n; i++)
    {   
        scanf("%d",&arr[i]);
        if(arr[i]>=0 && arr[i]<=2){
            continue;
        }
        else{
            printf("Invalid value!\n");
            return;
        }
    }
    int flag0=0,flag1=0,flag2=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            flag0++;
        }
        else if(arr[i]==1){
            flag1++;
        }
        else{
            flag2++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(flag0!=0){
            arr[i]=0;
            flag0--;
        }
        else if(flag0==0 && flag1!=0){
            arr[i]=1;
            flag1--;
        }
        else if(flag0==0 && flag1==0 && flag2!=0){
            arr[i]=2;
            flag2--;
        }
    }
    
    printf("Sorted array:- ");
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");

    //Exit
    explaination();
}

void explaination(){
    printf("Enter '1' for Restart, '0' for explaination and '2' for Exit:- ");
    int exit;
    scanf("%d",&exit);
    if(exit==1){
        sort_array_0_1_2();
    }
    else if(exit==0){
        printf("Here we create three flags for storing number of time 0, 1 and 2 repeate in array then using these flag values we put values (0,1,2) in array one by one in sorted order.\n");
        printf("Time Complexity:- O(n) , \nSpace Complexity:- O(1) \n");
        explaination();
    }
    
}