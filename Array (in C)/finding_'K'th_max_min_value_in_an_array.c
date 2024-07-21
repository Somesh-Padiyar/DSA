#include<stdio.h>

void explaination();
void finding_Kth_max_min();

int main(){
    finding_Kth_max_min();
    return 0;
    }

void finding_Kth_max_min(){    
    printf("Enter the size of the array:- ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Numbers of array:- \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of 'K' to find 'Kth' max and min element:- ");
    int k;
    scanf("%d",&k);

    //solution :- Time Complexity:- O(n^2) {because of using bubble sort} , Space Complexity:- O(1) 
    if(k==0){
        printf("Invalid 'k' value ! \n");
    }
    else{
        int flag=0;
        //bubble sort
        for(int i=0;i<n-1;i++){
            for (int j = 0; j < n-i-1; j++)
            {   
                if(arr[j]==arr[j+1])
                {
                    flag=1;
                }
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }       
        }
        //Case where we have distinct element in the array      
        if(flag==0){
            if(k>n){
                printf("Invalid 'k' value ! \n");
            }
            printf("The '%dth' Max element is:- %d\n",k,arr[n-k]);
            printf("The '%dth' Min element is:- %d\n",k,arr[k-1]);
        }

        //In case of repeating values in array this segment will get execute
        else{
            flag=0;
            for (int i = 0; i < n-1; i++)
            {
                if(arr[i]==arr[i+1]){
                    flag++;
                }
            }
            
            int n2;
            n2=n-flag;
            // int arr2[n2];
            int j=1;
            // arr2[0]=arr[0];
            for(int i = 0; i < n-1; i++)
            {
                if (arr[i]==arr[i+1])
                {
                    continue;
                }
                arr[j]=arr[i+1];
                j++;
            }
            if(k>n2){
                printf("Invalid 'k' value ! \n");
            }
            else{
            printf("The '%dth' Max element is:- %d\n",k,arr[n2-k]);
            printf("The '%dth' Min element is:- %d\n",k,arr[k-1]);
            }           
        }
    }
    //Exit
    explaination();
}
void explaination(){
    printf("Enter '1' for Restart, '0' for explaination and '2' for Exit :- ");
    int exit;
    scanf("%d",&exit);
    if(exit==1){
        finding_Kth_max_min();
    }
    else if(exit==0){
        printf("Here to find 'Kth' max and min value in array , we first sort our array using bubble sort then using flag variable we find out where elements are distinct or not , In case of Duplicate values in array we first find the number of duplicate values , then we place all distinct value of our sorted array from start ( by removing duplicate values from the order) , then we can easily find the 'Kth' max min value with the sorted array having all distinct element at the begining of an array.\n");
        printf("Time Complexity:- O(n^2) {because of using bubble sort, If we use quick sort our time complexity will be O(n*log(n))} , \nSpace Complexity:- O(1) \n");
        explaination();
    }
    
}