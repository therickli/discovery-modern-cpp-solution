int main() {
  int a[100];
  int *b = new int[100];
  delete[] b;
  return 0;
}