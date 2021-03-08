//program to calculate the number of even digits in given number

#include<stdio.h>

int CountEvenDigits(int iValue)
{
  int iCnt = 0;
  int iDigit = 0;
  
  while(iValue != 0)
  {
    iDigit = iValue % 10;
	
	if((iDigit % 2) ==0)
	{
	   iCnt++;
	}
    iValue = iValue / 10;
  }
  return iCnt;
}

int main()
{
 int iNo = 0;
 int iRet = 0;
 
 printf("Enter The Number \n");
 scanf("%d",&iNo);
 
 iRet = CountEvenDigits(iNo);
 printf("No of digits are : %d",iRet);
 
return 0;
}

/*
output

Enter The Number
1234
No of digits are : 2

*/