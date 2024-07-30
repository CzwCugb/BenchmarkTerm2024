typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(17 != x) {
    y = 20;
  }
  x += 2;
  if(x != y) {
    x += 1;
  }
  y += 2;
  
  
  
}
