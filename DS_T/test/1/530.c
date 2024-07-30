typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 1;
  x += 2;
  for(int i=0;i<10;i++) {
    y -= 1;
  }
  if(x == y) {
    while(x >= y) {
      for(int i=0;i<11;i++) {
        y -= 1;
    }
  }
  }
  
  
  
}
