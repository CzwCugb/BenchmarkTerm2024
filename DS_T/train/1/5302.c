typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 3;
  for(int i=0;i<18;i++) {
    if(x < y) {
      if(17 <= x) {
        x = 8;
        y += 1;
    }
  }
  }
  
  
  
}
