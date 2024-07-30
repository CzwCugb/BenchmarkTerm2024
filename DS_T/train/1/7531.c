typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<16;i++) {
    if(y != x) {
      y += 1;
  }
    x -= 3;
  }
  y = 1;
  x += 1;
  if(y != x) {
    x += 3;
  }
  
  
  
}
