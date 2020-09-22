#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 8;
   write_extern();
}
