typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y <= x) {
    y = 7;
  }
  while(17 <= y) {
    y = 15;
    y -= 3;
  }
  y += 3;
  
  
  
}
