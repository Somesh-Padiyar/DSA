#include<stdio.h>

void move_negative_no();
void explaination();

int main(){
    move_negative_no();
    return 0;
}

void move_negative_no(){
    printf("Enter the size of the array:- ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Numbers of array:- \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

// Here order doesn't matter we just want to put all negative number at start (one side). 
    int ln=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0){
            int temp = arr[i];
            arr[i] = arr[ln];
            arr[ln] = temp;
            ln++;
        }
    }

    printf("New array:- ");
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
        move_negative_no();
    }
    else if(exit==0){
        printf("Here we take a varible 'ln' that is initialy assigned to zero to store the index of next posible place for upcoming negative number in the iteration, then we start iterating our array, when we get a negative number we swap that number with the number at index 'ln' and increment value of 'ln'.\n");
        printf("Time Complexity:- O(n) , \nSpace Complexity:- O(1) \n");
        explaination();
    }
    
}