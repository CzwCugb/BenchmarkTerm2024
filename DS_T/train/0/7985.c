typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<16;i++) {
    x = 15;
    while(x >= x) {
      for(int i=0;i<8;i++) {
        x += 1;
    }
      y += 2;
      if(y > x) {
        x -= 1;
    }
  }
  }
  
  
  
}
