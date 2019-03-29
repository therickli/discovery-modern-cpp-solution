#include <iostream>
int main() {
  char *a;
  int b[10];
  int *c = b;

  char **d;
  // d = new char *[5];
  // d[0] = "asfd";
  // d[1] = "er";
  // d[2] = "sdf";
  // d[3] = "asdf";
  // d[4] = "as";
  char *e[2];
  e[0] = new char[4];
  e[1] = new char[4];
  e[0][0] = 'h';

  e[0][1] = 'i';
  e[0][2] = '0';
  e[0][3] = 'w';
  e[1][0] = 'a';
  e[1][1] = 'b';
  // e[1][2] = 0;
  // d = e;
  for (int i = 0; i < 2; i++) {
    std::cout << e[i] << ' ';
  }
  const int f = 3;
  const int h = 4;
  const int *g = &f;
  g = &h;
  int y;
  int *const z = nullptr;
  std::cout << sizeof(y) << '\n';
  return 0;
}