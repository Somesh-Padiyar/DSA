#include<stdio.h>

void Finding_a_number_in_a_matrix();
void explaination();

int main(){
    Finding_a_number_in_a_matrix();
    return 0;
}

void Finding_a_number_in_a_matrix(){
    printf("Enter The number of rows in matrix : ");
    int row;
    scanf("%d",&row);
    printf("Enter The number of colums in matrix : ");
    int col;
    scanf("%d",&col);
    int mat[row][col];
    printf("Enter the values of matrix's element (row wise) : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    printf("Enter the value to be searched : ");
    int key;
    scanf("%d",&key);
    int flag=0;
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(mat[i][j]==key){
            printf("Searched value is present at %d row and %d column.\n",(i+1),(j+1));
            flag++;
            }
        }    
    }
    if(flag==0){
        printf("value is not present in the matrix.\n");
    }
    printf("\n");
        for (int i = 0; i < row; i++)
    {   
        printf("| ");
        for (int j = 0; j < col; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("|\n"); 
    }
    printf("\n");
    explaination();
}

void explaination(){
    printf("Enter '1' for Restart, '0' for explaination and '2' for Exit:- ");
    int exit;
    scanf("%d",&exit);
    if(exit==1){
        Finding_a_number_in_a_matrix();
    }
    else if(exit==0){
        printf("Here we search one by one each element.\n");
        printf("Time Complexity:- O(n*m) , \nSpace Complexity:- O(1) \n");
        explaination();
    }
    
}