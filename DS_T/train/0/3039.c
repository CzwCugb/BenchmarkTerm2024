typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 11;
  while(11 != x) {
    for(int i=0;i<5;i++) {
      x += 1;
  }
    if(x != y) {
      x -= 1;
  }
  }
  
  
  
}
