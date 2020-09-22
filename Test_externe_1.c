#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 6;
   write_extern();
}