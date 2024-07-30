typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 20;
  while(x == y) {
    y = 14;
  }
  y = 6;
  if(y <= x) {
    y = 12;
    x += 2;
  }
  
  
  
}
