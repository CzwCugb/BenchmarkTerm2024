typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<8;i++) {
    y = 12;
    x = 14;
    if(x != y) {
      x = 2;
  }
    while(y < x) {
      x += 2;
  }
  }
  
  
  
}
