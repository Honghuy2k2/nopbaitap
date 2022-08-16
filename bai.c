#include "stdio.h"


  char arr1[7]={2,3,4,5,6,12};
 char  arr2[7]={2,3,4,5,6,12};
 
	int length1 = sizeof arr1 / sizeof(char);
    int length2 = sizeof arr2 / sizeof(char);
int isEqual(char arr1[],char arr2[])
{
	

	
    
   for (int i = 0; i < length1; i++)
   {
     printf("MA HEX arr1[%d] :0x%x\n",i,arr1[i]);
   }

   
    for (int i = 0; i < length2; i++)
    {
      printf("MA HEX arr2[%d] :0x%x\n",i,arr2[i]);
    }

  for (int i = 0; i < 6; i++)
    {
      if(arr1[i]==arr2[i] && length1 == length2)
       {
          
      }
       else
       {
         printf("fail ");
           return 0;
		    }
   }
   printf(" true");
    return 1;
}



int main(int argc, char const *argv[])
{
    
   char a;
    a =isEqual(arr1,arr2);
   printf(" ",a);
   
    return 0;
}
