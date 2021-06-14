/* Enter your solutions in this file */
#include <stdio.h>

/*test_average.c*/
float average(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }
float average(int arr[], int len){
  int sum = 0;
  float avg;
  for(int p=0; p<len; p++){
    sum = sum + arr[p];
  }
  avg = (float)sum/len;
  return avg;
}



/*test_factors.c*/

int factors(int, int []);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}
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


/*test_max.c*/

int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }int max(int arr[], int len){
  int maximum = arr[0];
  for(int i= 0; i< len; i++){
    if(arr[i]> maximum)
      maximum = arr[i];
  }
  return maximum;
       }

/*test_min.c*/


int min(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
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


/*test_mode.c*/


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
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
