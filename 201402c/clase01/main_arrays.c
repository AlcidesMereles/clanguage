#include <stdio.h> 

void func( int iArray[] ) {
  printf("F Sizeof iArray: %d\n", sizeof(iArray) );
}

int main(int argc, char**argv ) { 
  char cArray[] = "this is one string";
  int  iArray[] = { 0, 125, 21, 127, 512 };

  printf("Sizeof cArray: %d\n", sizeof(cArray) ); // WARNING: it returns element count + 1 (\0)
  printf("Sizeof iArray: %d\n", sizeof(iArray) );

  // All this forms are equivalent
  printf("Array direction: 0x%x, 0x%x, 0x%x\n", cArray, &cArray, &cArray[0] );

  char* first = cArray;
  printf("First element: 0x%x, %c\n", first, *first );

  int* third00 = &iArray[2];
  int* third01 = iArray+2;
  printf("First element: 0x%x, %d\n", third00, *third00 );
  printf("First element: 0x%x, %d\n", third01, *third01 );

  // WARNING!!!!
  func( iArray );

	return 0; 
} 
