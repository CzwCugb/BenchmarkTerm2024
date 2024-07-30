typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 3;
  y -= 3;
  if(y >= 11) {
    for(int i=0;i<5;i++) {
      if(y <= x) {
        x += 1;
    }
  }
  }
  
  
  
}
