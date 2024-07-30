typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x <= y) {
    y = 1;
  }
  x -= 3;
  x = 19;
  for(int i=0;i<3;i++) {
    x -= 2;
  }
  
  
  
}
