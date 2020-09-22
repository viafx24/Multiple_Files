#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main() {
   count = 26;
   write_extern();
}
