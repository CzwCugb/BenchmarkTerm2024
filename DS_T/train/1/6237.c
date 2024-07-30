typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<9;i++) {
    y = 2;
    x += 3;
    for(int i=0;i<3;i++) {
      if(x < 6) {
        x -= 1;
    }
  }
  }
  
  
  
}
