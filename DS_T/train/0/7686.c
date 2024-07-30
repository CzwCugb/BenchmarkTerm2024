typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x < y) {
    y = 14;
    y = 19;
    for(int i=0;i<16;i++) {
      y += 3;
  }
    y -= 3;
  }
  
  
  
}
