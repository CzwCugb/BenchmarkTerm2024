typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 11;
  y += 3;
  if(2 > y) {
    if(x != 2) {
      y -= 3;
  }
    y += 1;
  }
  
  
  
}
