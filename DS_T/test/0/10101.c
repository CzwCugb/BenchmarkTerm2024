typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 3;
  if(y < x) {
    x = 3;
    while(y != x) {
      y = 17;
      y += 3;
      y = 1;
  }
    y += 1;
  }
  
  
  
}