typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(18 == x) {
    x = 3;
    x -= 1;
  }
  for(int i=0;i<17;i++) {
    if(x != y) {
      y += 2;
  }
  }
  
  
  
}
