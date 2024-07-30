typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  y += 2;
  if(8 <= y) {
    x = 5;
    y += 3;
    x -= 1;
  }
  x -= 3;
  
  
  
}
