typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 1;
  for(int i=0;i<5;i++) {
    x = 19;
  }
  if(x < y) {
    while(y < x) {
      y -= 2;
  }
  }
  
  
  
}
