typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y >= x) {
    y += 1;
  }
  x = 1;
  x -= 1;
  for(int i=0;i<20;i++) {
    x -= 2;
  }
  
  
  
}
