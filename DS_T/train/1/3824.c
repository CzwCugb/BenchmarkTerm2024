typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x < y) {
    if(7 != x) {
      x += 1;
  }
    x -= 1;
    x -= 3;
  }
  if(x <= y) {
    y -= 3;
    y -= 2;
  }
  
  
  
}