typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<2;i++) {
    y = 10;
  }
  x -= 1;
  while(20 != x) {
    y = 14;
    x -= 2;
  }
  
  
  
}
