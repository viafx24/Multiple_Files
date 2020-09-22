#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 28;
   write_extern();
}
