#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 24;
   write_extern();
}
