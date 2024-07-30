typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 1;
  while(y < x) {
    x += 3;
    y = 5;
  }
  y -= 1;
  while(y == x) {
    y -= 2;
  }
  
  
  
}
