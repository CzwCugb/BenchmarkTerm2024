typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(y < x) {
    y += 1;
    y -= 3;
    if(8 == x) {
      x += 3;
      y = 9;
      if(y > x) {
        y += 2;
    }
  }
  }
  
  
  
}