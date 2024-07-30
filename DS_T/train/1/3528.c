typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<18;i++) {
    if(x == y) {
      y -= 3;
      if(x == x) {
        for(int i=0;i<9;i++) {
          if(x != y) {
            x -= 1;
        }
      }
    }
  }
  }
  
  
  
}
