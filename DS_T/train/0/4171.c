typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 17;
  while(y != x) {
    if(x > y) {
      y = 9;
      x = 5;
  }
    x -= 3;
  }
  
  
  
}