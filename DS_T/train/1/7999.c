typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<17;i++) {
    x = 11;
    for(int i=0;i<18;i++) {
      if(x != 12) {
        y = 9;
        x -= 2;
    }
  }
  }
  
  
  
}
