#include <stdio.h>

struct ece {
  char name[50];
  int a;
  int r;
int  age ;
int roll;
};

int main() {
  struct ece ece0={"name","age","roll"};
  struct ece ece1  = {"saket", 19, 25};
  struct ece ece2  = {"aditya", 19,8};
  struct ece ece3  = {"raghav", 18, 5};
  struct ece ece4  = {"ridhima", 18, 12};
  struct ece ece5  = {"vikrant", 19, 68};
  struct ece ece6  = {"prashant", 19, 25};
  struct ece ece7  = {"ridhi", 18, 24};
  struct ece ece8  = {"garvita", 18, 26};
  struct ece ece9 = {"himanshu", 18, 1};
  struct ece ece10 = {"satyam", 18, 27};
  struct ece ece11  = {"priyam", 18, 23};


  printf("%s %s %s\n", ece0.name, ece0.age, ece0.roll);
  printf("%s %d %d\n", ece1.name, ece1.a, ece1.r);
  printf("%s %d %d\n", ece2.name,ece2.a, ece2.r);
  printf("%s %d %d\n", ece3.name,ece3.a,ece3.r);
  printf("%s %d %d\n", ece4.name, ece4.a, ece4.r);
  printf("%s %d %d\n", ece5.name, ece5.a, ece5.r);
  printf("%s %d %d\n", ece6.name, ece6.a, ece6.r);
  printf("%s %d %d\n", ece7.name, ece7.a, ece7.r);
  printf("%s %d %d\n", ece8.name, ece8.a, ece8.r);
  printf("%s %d %d\n", ece9.name, ece9.a, ece9.r);
  printf("%s %d %d\n", ece10.name, ece10.a, ece10.r);
  printf("%s %d %d\n", ece11.name, ece11.a, ece11.r);;


  return 0;
}
