#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 15;

   write_extern();
}
