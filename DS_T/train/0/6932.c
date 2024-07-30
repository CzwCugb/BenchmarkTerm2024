typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x <= 7) {
    y += 2;
  }
  while(7 < y) {
    x -= 1;
  }
  x = 20;
  x -= 1;
  
  
  
}
