#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 29;
   write_extern();
}
