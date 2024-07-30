typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x > y) {
    y -= 1;
  }
  while(13 <= x) {
    y -= 1;
  }
  while(x != y) {
    if(x > 15) {
      y -= 2;
      x -= 1;
  }
  }
  
  
  
}
