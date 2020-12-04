/*
归并排序 
*/
#include<cstdio>
using namespace std; 
void merge(int sourceArr[],int tempArr[], int startIndex, int midIndex, int endIndex)
{
    int i = startIndex, j = midIndex + 1, k = startIndex;
    while(i != midIndex + 1 && j != endIndex + 1)
    {
        if(sourceArr[i] > sourceArr[j])
            tempArr[k++] = sourceArr[j++];
        else
            tempArr[k++] = sourceArr[i++];
    }
    while(i != midIndex+1)
        tempArr[k++] = sourceArr[i++];
    while(j != endIndex + 1)
        tempArr[k++] = sourceArr[j++];
    for(i = startIndex; i <= endIndex; i++)
        sourceArr[i] = tempArr[i];
}
 
//内部使用递归
void merge_sort(int sourceArr[], int tempArr[], int startIndex, int endIndex)
{
    int midIndex;
    if(startIndex < endIndex)
    {
        midIndex = startIndex + (endIndex - startIndex) / 2;//避免溢出int
        merge_sort(sourceArr, tempArr, startIndex, midIndex);
        merge_sort(sourceArr, tempArr, midIndex+1, endIndex);
        merge(sourceArr, tempArr, startIndex, midIndex, endIndex);
    }
}
 
int main()
{
    int b[8], a[8] = {50, 10, 20, 30, 70, 40, 80, 60};
    merge_sort(a, b, 0, 7);
    for(int i = 0; i < 8; i++)
        printf("%d ", a[i]);
    return 0;
}
