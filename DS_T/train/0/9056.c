typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 8;
  y += 1;
  x -= 2;
  while(y >= x) {
    y += 1;
    y += 2;
  }
  
  
  
}
