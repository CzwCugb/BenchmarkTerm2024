typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 3;
  for(int i=0;i<12;i++) {
    y = 9;
    while(y > x) {
      y = 7;
      if(y != 13) {
        x += 1;
    }
  }
  }
  
  
  
}