typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(13 <= y) {
    for(int i=0;i<17;i++) {
      if(y != x) {
        x = 20;
    }
      x += 1;
      x += 2;
      while(x < y) {
        x += 2;
    }
  }
  }
  
  
  
}