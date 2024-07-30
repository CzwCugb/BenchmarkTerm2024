typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 2;
  for(int i=0;i<17;i++) {
    x -= 1;
  }
  x = 13;
  y = 4;
  while(y != x) {
    x -= 2;
    x += 2;
  }
  
  
  
}
