typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<3;i++) {
    x = 17;
    y = 1;
  }
  for(int i=0;i<20;i++) {
    while(x != y) {
      x += 3;
  }
  }
  
  
  
}
