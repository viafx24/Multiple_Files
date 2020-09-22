#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 11;
   write_extern();
}
