typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(15 == y) {
    x = 6;
  }
  for(int i=0;i<10;i++) {
    y = 5;
    x = 6;
    if(x > y) {
      x -= 3;
  }
  }
  
  
  
}
