/*
Given an array which has two arithmetic sequences and
one geometric sequence (in any order).
Copy indexes where each sequence starts and ends into an Array and return it.

Note : Each sequence will be of atleast LENGTH 3,and The sequences can be overlapping

Ex : 1, 3, 5, 7, 2, 4, 8, 16 18 20, output is [0, 3, 7, 9, 4, 7]
Ex : 1 ,2, 4, 8, 12, 16, 21, 26     output is [2, 5, 5, 7, 0, 3]
Ex : 10 15 20 30 50 70 100 200 400 800  output is [0, 2, 3, 5, 6, 9]

The final_arr[0], final_arr[1] values in final array
will be start and end indexes of First A.P in the Original Array

The final_arr[2], final_arr[3] values in final array
will be start and end indexes of Second A.P

The final_arr[4], final_arr[5] values in final array
will be start and end indexes of First  G.P (Only)

Input: Array and Length of Array
Output : New Array which has 6 integers , which denote the (start,end) indexes .

Note : All elements in the array will be part of atleast 1 sequence .
Two A.P cannot start at same index .

Difficulty : Medium
*/
#include<malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int * find_sequences(int *arr, int len){
	//Return final array which has 6indexes [AP1_S,AP1_E,AP2_S,AP2_E,GP1_S,GP2_E]
    int i=0,k,flag1=0,index=0,ind1=5,counts=0,flag=0;
    int *res=(int*)malloc(100);
	if(arr==NULL)
        return NULL;
    while(index<6)
    {
        flag1==0;



        for(k=0;k<len;k++)
        {


            if((arr[k+2]-arr[k+1]==arr[k+1]-arr[k])&&index<6&&i<len)
           {

               res[index]=k;index++;counts++;
               //printf("i = %d")

                while((arr[k+2]-arr[k+1]==arr[k+1]-arr[k])&&index<6&&i<len)
                {
                  //  printf("in first while");
                    k++;

                }
                res[index]=k+1;index++;
                //printf("\nThe value of i is %d, res=%d",index,res[1]);
                k=k;

           }
           flag1=1;
        }


            for(k=0;k<len;k++)
            {
                if((arr[k+1]*arr[k+1])-arr[k]*arr[k+2]==0)
                {
                    res[index]=k;index++;
                    while((arr[k+1]*arr[k+1])-arr[k]*arr[k+2]==0)
                    {

                        k++;

                    }
                    res[index]=k+1;index++;

                    i=k+2;
                    break;


                }
            }
        }

    return res;

}



/*int main()
{
    int arr[10]={1, 3, 5, 7, 2, 4, 8 ,16 ,18 ,20};int i;


int arr1[10]={10 ,15 ,20 ,30 ,50 ,70 ,100, 200, 400, 800};
    int *res=(int*)malloc(100);
    res=find_sequences(arr1,10);
    for(i=0;i<6;i++)
    {

        printf("%d ",res[i]);
    }
    return 0;
}*/
