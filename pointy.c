#include <stdio.h>

//increments the value pointed to by the pointed by 16
void incrementBySixteen(char * somePointyBoi){
  int i;
  for (i=0; i<16; i++){
    (*somePointyBoi)++;
  }
}

int main() {
  unsigned int num = 3122430015;
  char * aPointer = &num;

  printf("The int printed as a hex is: %x\n",num);
  //printf("The address of pointer is: %p\n", aPointer);
  printf("----------\n");
  printf("The first byte of int as hex is: %hhx\n", *aPointer);
  aPointer++;
  printf("The second byte of int as hex is: %hhx\n", *aPointer);
  aPointer++;
  printf("The third byte of int as hex is: %hhx\n", *aPointer);
  aPointer++;
  printf("The fourth byte of int as hex is: %hhx\n", *aPointer);
  printf("----------\nIncrementing each byte of the int by 1\n");
  aPointer -= 3;
  (*aPointer)++;
  printf("The first byte of int as hex is: %hhx\n", *aPointer);
  aPointer++;
  (*aPointer)++;
  printf("The second byte of int as hex is: %hhx\n", *aPointer);
  aPointer++;
  (*aPointer)++;
  printf("The third byte of int as hex is: %hhx\n", *aPointer);
  aPointer++;
  (*aPointer)++;
  printf("The fourth byte of int as hex is: %hhx\n", *aPointer);
  printf("Your new int at that address as a hex is: %x\n",num);
  printf("--------------\nNow let's increment each byte in the int by 16\n");
  aPointer -= 3;
  incrementBySixteen(aPointer);
  printf("The first byte of int as hex is: %hhx\n", *aPointer);
  aPointer++;
  incrementBySixteen(aPointer);
  printf("The second byte of int as hex is: %hhx\n", *aPointer);
  aPointer++;
  incrementBySixteen(aPointer);
  printf("The third byte of int as hex is: %hhx\n", *aPointer);
  aPointer++;
  incrementBySixteen(aPointer);
  printf("The fourth byte of int as hex is: %hhx\n", *aPointer);
  printf("Your new int at that address as a hex is: %x\n",num);
  return 0;
}
