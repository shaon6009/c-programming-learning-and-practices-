//find the salted from of a password entered by the user,if the salt is 123&added at the end
#include<stdio.h>
#include<string.h>
void salting (char password[ ]);
int main()
{
    char password[100];
    scanf("%s",  password);
    salting(password);
}
void salting (char password[]){
char salt[ ]="1234";
char newpassword[200];
strcpy(newpassword,password);
strcat(newpassword,salt);
puts(newpassword);
}
//8 hour 12min
