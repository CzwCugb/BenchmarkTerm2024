typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 3;
  x -= 3;
  x += 1;
  if(x != 1) {
    y = 15;
    if(y == x) {
      x -= 1;
  }
  }
  
  
  
}
