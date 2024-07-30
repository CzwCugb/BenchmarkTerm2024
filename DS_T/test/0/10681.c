typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 2;
  for(int i=0;i<12;i++) {
    while(y != x) {
      if(13 <= y) {
        x = 13;
        x -= 2;
    }
      y -= 2;
  }
    y -= 1;
  }
  
  
  
}
