#include <stdio.h>
#include <string.h>

int c_structs() {
  struct Student {
    char name[100];
    char major[100];
    int s_id;
  };

  struct Student jea;
  jea.s_id = 491824;
  strcpy(jea.name, "Deez nuts");
  strcpy(jea.major, "Too easy");

  return 0;
}

int arrays_and_stuff() {
  int list_of_stuff[] = { 1, 2, 5, 6236326, 6};
  printf("%d\n", list_of_stuff[4]);
  return 0;
}

int user_input() {
  char some_text[20];
  printf("Give me text:");
  scanf("%s", some_text);
  printf("Thanks for %s\n", some_text);

  int digit;
  printf("Give me a digit:");
  scanf("%d", &digit);
  printf("Thanks for %d\n", digit);

  // for text with spaces
  fgets(some_text, 20, stdin);
  printf("%s\n", some_text);

  return 0;
}

int numbers_in_c() {
  printf("%f\n", 4 + 5.2);
  printf("%f\n", 4 - 5.2);
  printf("%f\n", 4 * 5.2);
  printf("%f\n", 4 / 5.2);
  printf("%d\n", 4 / 3); // 1 
  printf("%d\n", 4.5); // 73896
  return 0;
}

int printf_stuff() {
  printf("First line\n");
  printf("Format specifiers %d\n", 10);
  printf("Format specifiers %s", "what?\n");
  printf("Format specifiers %f\n", 4.51025);
  printf("%c\n", 'D');

  return 0;
}

int data_types() {
  /*
   * Basic data types
   */
  int age = 27;
  double weight = 74.5;
  char initial = 'J';

  char sentence[] = "A string of characters";

  return 0;
}

int variables() {
  int age = 30;
  char name[] = "DEEZ NUTS";

  printf("There were some nuts: %s\n", name);
  printf("The nuts were %d years old\n", age);

  const int AGE = 25; // wouldn't that be nice

  return 0;
}

int main() {
  variables();
  data_types();
  printf_stuff();
  numbers_in_c();
  user_input();
  arrays_and_stuff();
  c_structs();
  return 0;
}

