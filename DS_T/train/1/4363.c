typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 8;
  x += 3;
  if(y < x) {
    y = 4;
  }
  if(x < y) {
    while(x == y) {
      y += 2;
  }
  }
  
  
  
}
