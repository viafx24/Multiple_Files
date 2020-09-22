#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 17;

   write_extern();
}
