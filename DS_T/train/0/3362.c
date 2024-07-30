typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 9;
  while(x <= 11) {
    y = 5;
    y -= 3;
    if(16 > y) {
      y = 14;
      x -= 1;
  }
  }
  
  
  
}
