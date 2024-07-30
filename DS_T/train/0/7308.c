typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 10;
  y += 3;
  while(x != 5) {
    y -= 2;
    if(3 == x) {
      y -= 3;
      x -= 2;
  }
  }
  
  
  
}
