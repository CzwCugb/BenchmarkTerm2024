typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<14;i++) {
    if(y == x) {
      x -= 3;
      while(y >= x) {
        x = 5;
    }
      y += 2;
  }
  }
  
  
  
}
