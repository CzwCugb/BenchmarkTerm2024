typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 14;
  if(x <= y) {
    x = 12;
    y = 4;
  }
  x = 9;
  if(x <= 15) {
    x -= 2;
  }
  
  
  
}
