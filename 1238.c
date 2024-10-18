#include <stdio.h>
#include <string.h>
int main() {

    int N,i;
    scanf("%d",&N);
    for(i=0; i<=N; i++){
        char s1[51];
        char s2[51];
        scanf("%s",s1);
        scanf("%s",s2);
        int len1=strlen(s1), len2=strlen(s2);
        int len=len1+len2;
        char s[len];
        int j=0,k=0,index=0;
        while(j < len1 && k < len2){
            s[index++] = s1[j++];
            s[index++] = s2[k++];
        }
        while(j < len1){
            s[index++] = s1[j++];
        }
        while(k < len2){
            s[index++] = s2[k++];
        }
        int m;
        for(m=0; m<index; m++){
            printf("%c",s[m]);
        }
        printf("\n");
    }

    return 0;
}
