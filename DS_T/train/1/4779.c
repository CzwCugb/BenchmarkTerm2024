typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y <= 3) {
    y += 1;
  }
  y = 7;
  if(y != y) {
    y += 3;
    y += 2;
    y += 2;
  }
  
  
  
}
