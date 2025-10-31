#include <stdio.h>
#include <stdlib.h>
#define N_LEN 4

void rotateArr(int arr[][N_LEN], int nGrp, int **pArr, int rotateCnt);
void printArr(int **pArr, int nGrp);
void freeArr2Dimension(int *pArr, int nGrp);

int main(void)
{
  int nGrp = 4;
  int arr[N_LEN][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int *pArr[N_LEN];
  int i;

  /* 90도씩 회전한 값을 담을 배열 */
  for (i = 0; i < N_LEN; i++)
  {
    pArr[i] = (int *)malloc(sizeof(int) * nGrp);
  }

  rotateArr(arr, 4, pArr, 0);

  printArr(pArr, nGrp);

  return 0;
}

void rotateArr(int arr[][N_LEN], int nGrp, int **pArr, int rotateCnt)
{
  int k = 3;
  int i, j, g;

  // 오른쪽으로 90도 회전한다
  for (g = 0; g < rotateCnt; g++)
  {
    for (i = 0; i < nGrp; i++)
    {
      for (j = 0; j < N_LEN; j++)
      {
        pArr[j][k] = arr[i][j];
      }
      k--;
    }
  }
}

void printArr(int **pArr, int nGrp)
{
  // 변경된 배열을 출력한다
  int i, j;
  for (i = 0; i < nGrp; i++)
  {
    for (j = 0; j < N_LEN; j++)
    {
      printf("%d ", pArr[i][j]);
    }
    printf("\n");
  }
}

// void freeArr2Dimension(int *pArr, int nGrp)
// {
//   int i;
//   for (i = 0; i < N_LEN; i++)
//   {
//     pArr[i] = (int *)malloc(sizeof(int) * nGrp);
//   }
// }