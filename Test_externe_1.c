#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 101;
   write_extern();
}
