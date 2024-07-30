typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 16;
  y = 1;
  x = 13;
  if(x <= y) {
    while(x != y) {
      x -= 2;
  }
  }
  
  
  
}
