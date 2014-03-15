#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cnt[22222];

int main() {
    memset(cnt,0,sizeof(cnt));
    int n;
    scanf("%d",&n);
    for(int i=0,x;i<n;i++){
        scanf("%d",&x);
        cnt[x+10000]--;
    }
    scanf("%d",&n);
    for(int i=0,x;i<n;i++){
        scanf("%d",&x);
        cnt[x+10000]++;
    }
    for(int i=-10000;i<=10000;i++)
        if(cnt[i+10000] > 0)
            printf("%d ",i);
    return 0;
}

