typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y != x) {
    y = 5;
    y += 2;
  }
  x = 17;
  for(int i=0;i<1;i++) {
    x -= 1;
  }
  
  
  
}