typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x != 16) {
    x += 2;
    if(x <= 8) {
      if(y < x) {
        x += 3;
        x -= 3;
    }
  }
  }
  
  
  
}
