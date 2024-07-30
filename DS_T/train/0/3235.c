typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 3;
  if(y != 20) {
    x += 2;
    y = 7;
    while(x > y) {
      x -= 3;
  }
  }
  
  
  
}
