typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 1;
  while(x < 2) {
    x -= 3;
    y += 2;
  }
  while(x > x) {
    x -= 1;
    y -= 1;
    y -= 2;
  }
  
  
  
}
