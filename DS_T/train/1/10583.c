typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 1;
  y -= 2;
  for(int i=0;i<5;i++) {
    if(y != x) {
      y += 3;
  }
    for(int i=0;i<7;i++) {
      y += 2;
  }
  }
  
  
  
}