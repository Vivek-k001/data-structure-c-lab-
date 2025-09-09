#include <stdio.h>
#define MAX 5
int q[MAX], f=-1, r=-1;

int main(){
    int ch,x;
    while(1){
        printf("1-Enq 2-Deq 3-Disp 4-Exit: ");
        scanf("%d",&ch);

        if(ch==1){ // enqueue
            if(r==MAX-1) printf("Overflow\n");
            else{
                printf("Enter value: ");
                scanf("%d",&x);
                if(f==-1) f=0;
                q[++r]=x;
            }
        }
        else if(ch==2){ // dequeue
            if(f==-1) printf("Underflow\n");
            else{
                printf("Dequeued: %d\n",q[f]);
                if(f==r) f=r=-1;
                else f++;
            }
        }
        else if(ch==3){ // display
            if(f==-1) printf("Empty\n");
            else{
                printf("Queue: ");
                for(int i=f;i<=r;i++) printf("%d ",q[i]);
                printf("\n");
            }
        }
        else break;
    }
}
