#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 9;
   write_extern();
}
