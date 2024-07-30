typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x <= y) {
    if(18 == y) {
      y -= 2;
      while(x != y) {
        y -= 2;
        y -= 1;
    }
  }
  }
  
  
  
}
