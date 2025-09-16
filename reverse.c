#include <stdio.h>
int main(){
int arr[]={1,4,3,2,6,5};
printf("printing array elements\n");
for(int i=0;i<5; i++){
printf(" %d ",arr[i]);
}
printf("\n");
printf("printing reversed elements :/n");
for(int i=4; i>=0; i--){
printf(" %d ",arr[i]);
}
return 0;
}
