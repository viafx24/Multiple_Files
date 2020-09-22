#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 27;
   write_extern();
}
