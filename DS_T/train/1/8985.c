typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 13;
  y -= 2;
  for(int i=0;i<12;i++) {
    while(x == y) {
      x = 10;
  }
    x -= 1;
  }
  y = 17;
  x += 1;
  
  
  
}
