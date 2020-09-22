#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 13;

   write_extern();
}
