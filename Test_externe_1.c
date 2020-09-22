#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 45;
   write_extern();
}
