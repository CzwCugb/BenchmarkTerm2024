typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 14;
  y -= 1;
  x += 3;
  x = 13;
  while(y < x) {
    x -= 2;
  }
  
  
  
}
