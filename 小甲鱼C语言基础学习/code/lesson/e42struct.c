#include <stdio.h>

struct Person
{
    char name[50];
    int age;
    float height;
};

void modifyPerson(struct Person *p)
{
    p->age += 1; // 先取址再++
}

int main()
{
    struct Person person = {"Emily", 28, 5.7};
    modifyPerson(&person);                              // 按引用传递
    printf("Age after modification: %d\n", person.age); // 输出29
    getchar();
    return 0;
}
