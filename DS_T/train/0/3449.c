typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  while(x < 20) {
    y += 2;
  }
  if(y <= x) {
    y -= 2;
    y -= 1;
  }
  
  
  
}
