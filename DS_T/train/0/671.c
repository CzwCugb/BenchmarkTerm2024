typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 2;
  x -= 2;
  while(x != y) {
    for(int i=0;i<14;i++) {
      if(y != x) {
        x -= 3;
        x = 8;
        x -= 1;
    }
  }
  }
  
  
  
}
