typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y > x) {
    y = 13;
    x += 3;
    while(y >= 17) {
      y += 1;
  }
    x = 15;
  }
  y += 2;
  
  
  
}