typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y != x) {
    x -= 1;
    x += 1;
    x = 3;
    x += 1;
  }
  if(y != y) {
    x -= 3;
    x -= 1;
  }
  
  
  
}
