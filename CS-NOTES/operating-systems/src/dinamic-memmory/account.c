#include <stdio.h>
#include <stdlib.h>
struct account {
  char *name;
  char *email;
  int age;
};

account create_account(char* name, char* email, int age)
{
  struct account *acc = malloc(sizeof(struct account));
  acc->name = name;
  acc->email = email;
  acc->age = age;
  return acc;
}

int destroy_account(account acc)
{
  free(acc);
  return 0;
}


int main(int argc, char *argv[])
{
  return EXIT_SUCCESS;
}
