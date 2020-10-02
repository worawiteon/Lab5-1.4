#include <stdio.h>
int main(void) {
  float score;
  printf("Enter Grade :");
  scanf("%f",&score);
  switch((int)score/10){
  case 10:
  case 9:  
  case 8:
  if(score>=80&&score<=100)
  printf("Grade A = %0.2f" ,score);
  break;
  case 7:
  if(score>=75&&score<80)
  printf("Grade B+ = %0.2f" ,score);
  else
  printf("Grade B = %0.2f" ,score);
  break;
  case 6:
  if(score>=65&&score<70)
  printf("Grade C+ = %0.2f" ,score);
  else
  printf("Grade C = %0.2f" ,score);
  break;
  case 5:
  if(score>=55&&score<60)
  printf("Grade D+ = %0.2f" ,score);
  else
  printf("Grade D = %0.2f" ,score);
  break;
  default :
  if(score>=0&&score<50)
  printf("Grade F = %0.2f" ,score);
 }
 return 0;
}