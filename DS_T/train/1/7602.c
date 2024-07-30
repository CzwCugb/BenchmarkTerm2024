typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(17 != y) {
    y -= 2;
  }
  y += 2;
  if(y >= 15) {
    y = 13;
    x -= 2;
    for(int i=0;i<5;i++) {
      x -= 1;
  }
  }
  
  
  
}
