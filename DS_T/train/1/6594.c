typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 3;
  if(4 != y) {
    x = 19;
  }
  for(int i=0;i<14;i++) {
    x -= 2;
    x += 3;
  }
  
  
  
}
