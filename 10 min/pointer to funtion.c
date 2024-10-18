#include<stdio.h>
struct student{

int roll;
float cgpa;
char name[100];
};
 int main()
 {
     struct student s1={1615484459,4.00,"Rakibul"};
     printf(" student roll =%d\n",s1.roll);

     struct student *ptr=&s1;
     printf("student roll =%d\n", ptr->roll);//ptr->roll=(*ptr).roll

return 0;

 }
