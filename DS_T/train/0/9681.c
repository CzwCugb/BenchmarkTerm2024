typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 6;
  while(y > x) {
    y += 1;
    for(int i=0;i<3;i++) {
      if(y <= 2) {
        x -= 1;
    }
  }
  }
  
  
  
}