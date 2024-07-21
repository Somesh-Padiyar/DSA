#include<stdio.h>
void explaination();
void finding_max_min();
int main(){
    finding_max_min();
    return 0;
    }
void finding_max_min(){
    printf("Enter the size of the array:- ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Numbers of array:- \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    //solution :- (Time complexity :- O(n) , Space Complexity:- O(1))
    int max;
    int min;
    max=min=arr[0]; //Assignment Operator have Right to left Associativity
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        else if(max>arr[i] && min>arr[i]){
            min = arr[i];
        }
    }

    printf("Maximum value in the given array:- %d \n",max);
    printf("Minimum value in the given array:- %d \n",min);

    //Exit
    explaination();
}

void explaination(){
    printf("Enter '1' for Restart, '0' for explaination and '2' for Exit:- ");
    int exit;
    scanf("%d",&exit);
    if(exit==1){
        finding_max_min();
    }
    else if(exit==0){
        printf("Here we take two variables to store maximum and minimum value we start by having both value equal to array's first element then we compare maximum value to the next array element if it is greater than maximum value then we put that value in maximum and if that value is less than maximum and also less than minimum then we asign that value to the minimum (repeat upto last array element).\n");
        printf("Time Complexity:- O(n) , \nSpace Complexity:- O(1) \n");
        explaination();
    }
    
}