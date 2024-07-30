typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x == y) {
    x += 3;
  }
  for(int i=0;i<1;i++) {
    x += 2;
  }
  y += 3;
  for(int i=0;i<16;i++) {
    if(18 != x) {
      x += 3;
  }
  }
  
  
  
}
