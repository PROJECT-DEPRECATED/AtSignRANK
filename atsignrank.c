#include <stdio.h>
#include <stdbool.h>

char *atsignrank = "At Sign RANK";
bool isASR = true;

int main() {
  printf("Name : %s", atsignrank);
  printf("Born : %.4lf", 2008.1104);
  printf("RANK == ASR : %d", isASR ? "true" : "false");
  
  return 0;
}
