#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 25;
   write_extern();
}
