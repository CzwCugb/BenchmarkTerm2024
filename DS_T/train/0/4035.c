typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  x = 4;
  for(int i=0;i<18;i++) {
    x = 18;
    while(y != x) {
      x += 2;
  }
  }
  
  
  
}
