#include <stdio.h>
#define STUDENTS 10

int main(void)
{
  int scores[STUDENTS];
  int sum = 0;
  int i, average;

  for (i = 0; i < STUDENTS; i++) 
  {
    printf("학생들의 성적을 입력하시오: ");
    scanf("%d", &scores[i]);
  }
  for (i = 0; i < STUDENTS; i++)
    sum += scores[i];

  average = sum / STUDENTS;
  printf("성적 평균= %d\n", average);

  for(i = 0; i < STUDENTS; i++)
    if(scores[i] >= average) 
      printf("잘했어요\n");
    else 
      printf("더 열심히 하세요.\n");



    return 0;
}