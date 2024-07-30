typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 4;
  y += 2;
  while(y >= x) {
    y -= 1;
    x = 17;
    y += 1;
  }
  
  
  
}
