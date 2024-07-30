typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 12;
  for(int i=0;i<2;i++) {
    y = 7;
  }
  while(4 != y) {
    y = 7;
    y = 2;
    if(5 == y) {
      x -= 3;
  }
  }
  
  
  
}
