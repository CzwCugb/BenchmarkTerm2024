typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 3;
  if(y <= x) {
    y += 3;
  }
  y -= 1;
  while(7 != y) {
    y += 2;
    x += 3;
  }
  
  
  
}
