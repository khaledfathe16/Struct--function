#include<Stdio.h>

typedef int d32;
typedef unsigned char u8;
typedef float f32;

struct salary { //struct defintion to compiler
 d32 salary;
 d32 bonus;
 d32 deductions;

};

d32 ahmedt(struct salary x); //passing the struct to the function by value

     int main(void){
struct salary Ahmed; // allocations in memory + declaration
int sum=0;

printf("Please enter Ahmed Salary = ");   //scanf the values of elemnts of object
scanf("%d",&Ahmed.salary);
printf("Please enter Ahmed Bonuse = ");
scanf("%d",&Ahmed.bonus);
printf("Please enter Ahmed deduction = ");
scanf("%d",&Ahmed.deductions);
sum=ahmedt(Ahmed);
printf("Total value Needed is %d",sum);
}

d32 ahmedt(struct salary x){
d32 sum;
sum=x.salary+x.bonus+x.deductions;
return sum;
}


