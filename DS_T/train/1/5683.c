typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  x += 1;
  x += 2;
  x += 1;
  y -= 3;
  if(x == 11) {
    if(10 != y) {
      x += 2;
  }
  }
  
  
  
}
