/* Enter your solutions in this file */
#include <stdio.h>
/*average function*/
float average(int arr[], int len){
  int sum = 0;
  float avg;
  for(int p=0; p<len; p++){
    sum = sum + arr[p];
  }
  avg = (float)sum/len;
  return avg;
}
/*factors function*/
int factors(int num, int arr[]){
int cpy = num;
int cnt = 0;
int cnt1 =0;
for(int i = 2; i<num/2; i++){
if(num%i ==0){
for(int j=2; j<=i; j++){
if(i%j==0)
cnt+= 1;
}
if(cnt ==1){
while(cpy%i ==0){
arr[cnt1] = i;
cpy/= i;
cnt1+= 1;
}
cpy = num;}
cnt = 0;
}
else
continue;}
return cnt1;
}
/* max function*/
int max(int arr[], int len){
  int maximum = arr[0];
  for(int i= 0; i< len; i++){
    if(arr[i]> maximum)
      maximum = arr[i];
  }
  return maximum;
       }
/* min function*/
     int min( int arr[], int len){
  int min;
  min = arr[0];
  for(int h=0; h<len; h++){
    if(arr[h]<min){
      min = arr[h];
    }
  }
  return min;
}
/* mode function*/
int mode(int arr[], int len){
  int ar2[len];
  int n,p, max;
  int cnt = 0;
  for(int i = 0; i< len; i++){
  n = arr[i];
  for(int j=0; j<len; j++){
  if( arr[j] == n)
  cnt = cnt +1;
  }
  ar2[i] = cnt;
  cnt = 0;
  }
  max = ar2[0];
  for(int h = 0; h< len; h++){
  if(ar2[h]> max){
  max = ar2[h];
  }
  }
  for(p =0; p<len; p++){
  if(max == ar2[p])
  break;
  }
  return arr[p];
  }
