typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<17;i++) {
    x += 3;
  }
  y -= 1;
  while(y == x) {
    y = 13;
    x -= 1;
  }
  y += 3;
  
  
  
}
