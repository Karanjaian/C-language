//C structures
#include <stdio.h>
#include<string.h>

struct employee{
char name[25];
char department[20];
char email[50];
int id;
float Salary;
}
employee1,employee2;
int main(){
strcpy(employee1.name,"John Doe");
strcpy(employee1.department,"Human Resource");
strcpy(employee1.email,"john.doe@company.com");
employee1.id = 12345;
employee1.Salary = 55000.50;

printf("name:%s\n",employee1.name);
printf("department:%s\n",employee1.department);
printf("email:%s\n",employee1.email);
printf("id:%d\n",employee1.id);
printf("Salary:%f\n",employee1.Salary);
return 0;
}
