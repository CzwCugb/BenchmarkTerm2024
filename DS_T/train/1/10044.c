typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<1;i++) {
    if(y < 6) {
      x -= 2;
      if(x == 7) {
        x += 1;
        y -= 3;
    }
  }
  }
  
  
  
}
