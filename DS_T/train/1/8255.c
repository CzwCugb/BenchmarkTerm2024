typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  y += 2;
  y += 1;
  if(y > x) {
    x -= 1;
  }
  y = 11;
  x += 3;
  
  
  
}
