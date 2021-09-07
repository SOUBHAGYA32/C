#include <stdio.h>

int main()
{
  int NoOfyear,i;
  int year[NoOfyear];
  scanf("%d",&NoOfyear);
  for(i=1;i<NoOfyear;i++)
  {
    scanf("%d",&year[i]);
  }
  for(i=1;i<NoOfyear;i++)
  {
    if(year[i]%400==0 || year[i]%100==0 || year[i]%4==0)
    {
      printf("Yes");
    }
    else
    {
      printf("No");
    }
  }
  return 0;
}
