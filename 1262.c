#include<stdio.h>
#include<string.h>
int main(){
char trace [51];
while(scanf("%s", trace) != EOF) {
int procs;
scanf("%d", &procs);
int cycle = 0, i = 0;
int length = strlen(trace);
while(i< length) {
if(trace[i] == 'W'){
cycle += 1;
i++;
}else{
int r_counter = 0;
while(r_counter < procs && trace[i] =='R'){
r_counter++;
i++;
}
cycle++;
}
}
printf("%d\n", cycle);
}
return 0;
}
