typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 2;
  x = 11;
  if(y < x) {
    y += 2;
  }
  for(int i=0;i<13;i++) {
    for(int i=0;i<8;i++) {
      if(y == x) {
        x += 3;
    }
  }
  }
  
  
  
}
