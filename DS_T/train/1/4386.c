typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x < 1) {
    x += 3;
  }
  if(x > y) {
    if(y > x) {
      x = 1;
  }
    y -= 1;
  }
  
  
  
}
